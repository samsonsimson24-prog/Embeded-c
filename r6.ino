#include <LiquidCrystal.h>

// LiquidCrystal(rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  for (int num = 0; num <= 9; num++) {
    lcd.clear();
    lcd.setCursor(0, 0); // Column 0, Row 0
    lcd.print("Count: ");
    lcd.print(num);
    delay(700);
  }
}