#include "config.h"
#if defined(ESP32)
#include <WiFi.h>
#elif defined(ESP8266)
#include <ESP8266WiFi.h>
#endif
const char* ssid  = "802.11";
const char* password = "12345678p";
const int volt_pin = 36 ;

WiFiServer server(80);

String header;
unsigned long currentTime = millis();
unsigned long previousTime = 0;
const long timeoutTime = 2000;

void check_wifi(){
  WiFi.begin(ssid,password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

Data new_data;
void reconnect(){
if ((WiFi.status()) != WL_CONNECTED ){
  Serial.println("Reconnecting .");
  WiFi.disconnect();
  WiFi.reconnect();
  delay(5000);
}
}


void setup(){
  Serial.begin(9600);
  check_wifi();
  server.begin();
}
void loop() {
  new_data.adc_value = analogRead(volt_pin);

  WiFiClient client = server.available();

  if (client) {
    currentTime = millis();
    previousTime = currentTime;
    Serial.println("New Client.");
    String currentLine = "";
    while (client.connected() && currentTime - previousTime <= timeoutTime) {
      currentTime = millis();
      if (client.available()) {
        char c = client.read();
        Serial.write(c);
        header += c;
        if (c == '\n') {
          if (currentLine.length() == 0) {
            if (header.indexOf("GET /data") >= 0) {
              client.println("HTTP/1.1 200 OK");
              client.println("Content-Type: application/json");
              client.println("Connection: close");
              client.println();
              client.print("{");
              client.print("\"adc_value\":"); client.print(new_data.adc_value);
              client.println("}");
              client.println();
              break;
           }
          } else {
            currentLine = "";
          }
        } else if (c != '\r') {
          currentLine += c;
        }
      }
      }
      }
  client.stop();
    delay(100);

      }
