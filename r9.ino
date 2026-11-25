#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int BUTTON_PIN = 7;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Waiting...");
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    lcd.setCursor(0, 0);
    lcd.print("SWITCH PRESSED  "); // Extra spaces clear leftover text
  } else {
    lcd.setCursor(0, 0);
    lcd.print("Waiting...      ");
  }
  delay(100);
}