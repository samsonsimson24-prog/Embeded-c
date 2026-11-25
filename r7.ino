#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);

  lcd.setCursor(0, 0); // First line
  lcd.print("Name: YOUR NAME");

  lcd.setCursor(0, 1); // Second line
  lcd.print("USN: 1XX23CS001");
}

void loop() {
  // Static display; nothing needs to repeat
}