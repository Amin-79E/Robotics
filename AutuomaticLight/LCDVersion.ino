#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // or 0x3f

int LDR;
 int SensorPin = A0;

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  pinMode(SensorPin, INPUT);
}

void loop() {
  LDR = analogRead(SensorPin);
  Serial.println(LDR);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(LDR);


  if (LDR > 500) {
      lcd.setCursor(0, 1);
    lcd.print("It is nightime.");
  } else {
      lcd.setCursor(0, 1);
    lcd.print("It is daytime.");
  }

  delay(500);
}
