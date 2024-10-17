// Slave Code 
// Date : 2024-10-13 
#include <Wire.h>
uint8_t new_data = 0;
void setup() {
	Serial.begin(9600);   
	Wire.begin(10); // Slave address 10
	Wire.onReceive(receiveCallback); // Callback Function when data is recieved
	}
void receiveCallback(int bytes){
	new_data = Wire.read();  
	Serial.println("New Data Recieved " + String(new_data));
	}
void loop() {
	delay(1000);
	}
