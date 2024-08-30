const bool true_condition_ON = true;
const int button_1 = 7;
const int button_2 = 4;
const int button_3 = 2;
const int led_pin_1 = 13 ; // always on
const int led_pin_2 = 12 ; //red
const int led_pin_3 = 8 ; // violet
bool button_1_state = false;
bool button_2_state = false;
bool button_3_state = false;
const int tilt_sensor_pin = A1;
const int tilt_threshold = 500;
void blink_led(const char *mode){
  if (strcmp(mode,"y") == 0){
digitalWrite(led_pin_3,HIGH); //violet
  }
  else if(strcmp(mode,"r")==0){
    digitalWrite(led_pin_1,LOW);// green
    digitalWrite(led_pin_2,HIGH); //red
  }
  else if(strcmp(mode,"sos")==0 ){
    Serial.println("3");
    digitalWrite(led_pin_1,LOW);//green
    digitalWrite(led_pin_3,LOW); //violet
    while (true){
     for(int i =0 ;i < 3 ; ++i ){
      digitalWrite(led_pin_2,HIGH);
      delay(500);
      digitalWrite(led_pin_2,LOW);
      delay(500);
     }
     for(int i =0 ;i < 3 ; ++i ){
      digitalWrite(led_pin_2,HIGH);
      delay(200);
      digitalWrite(led_pin_2,LOW);
      delay(200);
     }
     for(int i =0 ;i < 3 ; ++i ){
      digitalWrite(led_pin_2,HIGH);
      delay(500);
      digitalWrite(led_pin_2,LOW);
      delay(500);
     }
     
    }
  }
  else{}
}
void setup() {
  Serial.begin(9600);
  pinMode(button_1, INPUT);
  pinMode(button_2, INPUT);
  pinMode(button_3, INPUT);
  pinMode(tilt_sensor_pin,INPUT);
  pinMode(led_pin_1, OUTPUT);
  pinMode(led_pin_2, OUTPUT);
  pinMode(led_pin_3, OUTPUT);
}

void loop() {
  button_1_state = digitalRead(button_1);
  button_2_state = digitalRead(button_2);
  button_3_state = digitalRead(button_3);
  
  if (button_1_state == true_condition_ON) {
    Serial.println("Button 1 ON");
    digitalWrite(led_pin_3,LOW);
    digitalWrite(led_pin_1,HIGH);
  } else {
    Serial.println("Button 1 OFF");
    digitalWrite(led_pin_1,LOW);
    blink_led("y");
  }
if (button_2_state != true_condition_ON) {
    Serial.println("Button 2 OFF");
    digitalWrite(led_pin_1,LOW);
     blink_led("r");
     
  }
if (button_3_state!= true_condition_ON) {
    Serial.println("Button 3 OFF");
    blink_led("r"); 
     blink_led("sos"); 
  } 
 int sensor_reading = analogRead(tilt_sensor_pin) ;
 Serial.println(sensor_reading);
if (sensor_reading <= tilt_threshold){
digitalWrite(led_pin_1,LOW);
for(int i = 0 ; i < 1000 ; i ++ ) {
  blink_led("y"); 
}
  

}
  delay(1000);
}
