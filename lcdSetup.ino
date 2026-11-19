
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // or 0x3f
int SensorValue;
int SeonsorPin = 13;

void setup() {
  
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Hello");

  lcd.setCursor(0, 1);
  lcd.print("Mohammed");

  /*delay(2000);
  lcd.clear();*/

  // a4 sda 
  // a5 scl 

}

void loop() {


}
