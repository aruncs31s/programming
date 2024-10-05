#include <LiquidCrystal_I2C.h>

#define ERROR_FACTOR .832
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display
float voltage = 0.0;
float R1 = 1000;
float R2 = 4000;
void setup() {
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  
}

void loop() {
  voltage = (((analogRead(A0)-14)  * 11.0* 3.3 )/1024.0 ) ;
  // Print a message on both lines of the LCD.
  lcd.setCursor(2,0);   //Set cursor to character 2 on line 0
  lcd.print("voltage = ");
  lcd.print(voltage);
  lcd.print(" V");
  // //
  // 
  lcd.setCursor(2,1);   //Move cursor to character 2 on line 1
  lcd.print(analogRead(A0));
delay(500);
  lcd.clear();
}
