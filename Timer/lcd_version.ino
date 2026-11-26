#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // or 0x3f

int sec = 0;
int minute = 0;
int hour = 0;


void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(0, 0);
  if (hour < 10) lcd.print("0");
  lcd.print(hour);
  lcd.setCursor(2, 0);
  lcd.print(":");
  lcd.setCursor(3, 0);
  if (minute < 10) lcd.print("0");
  lcd.print(minute);
  lcd.setCursor(5, 0);
  lcd.print(":");
  lcd.setCursor(6, 0);
  if (sec < 10) lcd.print("0");
  lcd.print(sec);

  //lcd.print("%d:%d:%d",sec,min,hour);

  delay(1000);
  sec++;

  if (sec >= 60) {
    sec = 0;
    minute++;
  }
  if (minute >= 60) {
    minute = 0;
    hour++;
  }
  if (hour >= 24) {
    hour = 0;
  }
}
