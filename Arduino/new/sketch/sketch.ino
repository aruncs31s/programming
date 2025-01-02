/**
Date : 2024-12-07 
Attempt 2 
**/
# if defined(ESP8266)
const uint8_t ADC_PIN = A0;
#endif
connst uint8_t DURATION_CHANGE_PIN = D2;
const uint8_t required_delay[] = {1,60} ;// Min Max
const uint8_t ADC_MAX = 1023;
uint8_t current_delay = 0; // To store the delay 

void get_delay(uint8_t *_current_delay){
uint16_t _raw_adc_value = analogRead(ADC_PIN);
*_current_delay = _raw_adc_value/ 17;  // 60 / 1023(ADC_MAX)  = ~17 
}
void IRAM_ATTR change_freq(){
  if current_delay > required_delay[1]{
      current_delay = required_delay[0];
  }
  else {
    current_delay+=5;
  }
}
void setup() {
  Serial.begin(9600);
  pinMode(DURATION_CHANGE_PIN,INPUT_PULLUP);
  attachInterrupt(13,DURATION_CHANGE_PIN,FALLING);
  pinMode(ADC_PIN, INPUT);
}
void loop(){
get_delay(&current_delay);
Serial.println("Current Delay : " + String(current_delay)); 
}
