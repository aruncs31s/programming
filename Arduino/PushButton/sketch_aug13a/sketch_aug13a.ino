const int button_1 = 2;
bool button_1_state = false;
void setup() {
  Serial.begin(9600);
  pinMode(button_1, INPUT);
}
void loop() {
  button_1_state = digitalRead(button_1);
  if (button_1_state == true) {
    Serial.println("ON");
  } else {
    Serial.println("OFF");
  }
  delay(400);
}
