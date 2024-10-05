void setup() {
    Serial.begin(115200);

#if defined(ESP8266)
    Serial.println("Running on NodeMCU!");
#else
    Serial.println("Unknown ESP8266 variant!");
#endif
}

void loop() {
}
