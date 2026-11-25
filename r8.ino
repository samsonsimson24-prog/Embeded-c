#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  for (int i = 9; i >= 0; i--) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Countdown:");
    lcd.setCursor(0, 1);
    lcd.print(i);
    delay(1000);
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Time Up!");
  delay(2000);
}