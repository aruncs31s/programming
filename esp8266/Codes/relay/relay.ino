#include <ESP8266WiFi.h>

// change the credential according to your needs
const char *ssid = "802.11";
const char *psswd = "12345678p";

// Set portnumber to 80
WiFiServer server(80);

String header;
bool led_relayState = false;

String current_led_status = "off";

unsigned long currentTime = millis();
unsigned long previousTime = 0; 
const long timeoutTime = 2000;
const int relay = D4;

void setup() {
  Serial.begin(115200);
  pinMode(relay, OUTPUT);
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, psswd);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(100);
    Serial.print(".");
  }
  Serial.println("Connected!");

  server.begin();
}

void loop() {
 WiFiClient client = server.available();
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

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
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("Connection: close");
            client.println();
            
            if (header.indexOf("GET /?=on") >= 0) {
              Serial.println("GPIO 02 on");
              led_relayState = true;
              digitalWrite(LED_BUILTIN, HIGH);
            } else if(header.indexOf("GET /?=off") >= 0) {
              Serial.println("GPIO D4 off");
              led_relayState = false;
              digitalWrite(LED_BUILTIN, LOW);
            }             
            client.println("<!DOCTYPE html><html>");
            client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
            client.println("<link rel=\"icon\" href=\"data:,\">");
            client.println("<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}");
            client.println(".button { background-color: #4CAF50; border: none; color: white; padding: 16px 40px;");
            client.println("text-decoration: none; font-size: 30px; margin: 2px; cursor: pointer;}");
            client.println(".button2 {background-color: #555555;}</style></head>");
            
            client.println("<body><h1>BUILTIN Led Control</h1>");
            
            client.println("<p>BUILTIN LED  - State " + String(led_relayState) + "</p>");
            if (led_relayState==false) {
              client.println("<p><a href=\"/?=on\"><button class=\"button\">ON</button></a></p>");
            } else {
              client.println("<p><a href=\"/?=off\"><button class=\"button button2\">OFF</button></a></p>");
            } 
            client.println("</body></html>");
            client.println();
            break;
          } else {
          currentLine = "";
          }
        } else if (c != '\r') { 
          currentLine += c;     
        }
      }
    }
    header = "";
    client.stop();
    Serial.println("Client disconnected.");
    Serial.println("");
  }
  delay(1000);
}

