// Master Code 
// Github  : https://github.com/aruncs31s/
// Date : 2024-10-13
// Time : 20:25
#include <Wire.h> 

uint8_t x = 0;
void setup() {
	Wire.begin();  // Start  I2C Bus as Master
}
void loop() {
	Wire.beginTransmission(10); // transmit to device 10
	// Above address can be used to intercept or the intercepter have to scan the entire address to get 
	Wire.write(x);              // sends x 
	Wire.endTransmission();    
	x=  random(0, 255);;
	delay(1000);
}
