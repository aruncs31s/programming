void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delayMicroseconds(100); // Approximately 10% duty cycle @ 1KHz
  digitalWrite(6, LOW);
  delayMicroseconds(1000 - 100);
}
