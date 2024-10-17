// Intercepted Code
// Date : 2024-10-13
#include <Wire.h>
int intercepted_data = 0;
uint8_t target_address = 0;
void receiveCallback(int bytes){
	intercepted_data = Wire.read();  
	Serial.println("Intercepted Data = " + String(intercepted_data));
	}
void scan_for_i2c() {
  for (;;) {
    Wire.begin(target_address);
    Serial.println("Tryingt address " + String(target_address));
    delay(5000);
    Serial.println("Intercepted Data = " + String(intercepted_data));
    if (intercepted_data > 0) {
      return;
    }
    Wire.end();
    target_address++;
  }
}



  void setup() {
    Serial.begin(9600);

    // Wire.begin(10); // Slave address 10

    Wire.onReceive(receiveCallback); // Callback Function when data is recieved
    scan_for_i2c();                  // Scan for I2C device
  }


void loop() { delay(1000); }
