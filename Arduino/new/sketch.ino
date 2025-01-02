const uint8_t OUTPUT_PIN = 6;
// Need 1 to 60 second -> delay(1000) to delay(1000 * 60)
uint8_t DELAY_POT = A0;

void setup() {
  Serial.begin(9600);
  pinMode(DELAY_POT,INPUT); 
}

void loop() {
  int val =  analogRead(DELAY_POT);

  Serial.println((val  * 60 ) / 1000);
  delay(500);
 }
