
#include <cstdint>

#ifdef ESP32
// For ESP32
uint8_t led_pin = 2;
uint8_t switch_pin = 4;
#elif defined(ESP8266)
// For eps8266
uint8_t led_pin = D2;
uint8_t switch_pin = D4;
#else
    #error "Unsupported platform"
#endif
bool status = false;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
  pinMode(switch_pin, INPUT);
}
void loop() {
  if (digitalRead(switch_pin)) {
    status ^= 1;
    digitalWrite(led_pin, status);
  }
}
