#include <DHT.h>

const int dhtPin = D0;
DHT dht(dhtPin, DHT11);

void setup(){
Serial.begin(9600);
dht.begin();
}

void loop(){
float h = dht.readHumidity();
float t = dht.readTemperature();

Serial.println("Humidity: " + String(h));
Serial.println("Temperature: " + String(t));
delay(3000);
}
