#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int BUTTON_PIN = 7;

int pressCount = 0;
int lastButtonState = HIGH;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Presses: 0");
}

void loop() {
  int currentButtonState = digitalRead(BUTTON_PIN);

  // Detect transition from unpressed (HIGH) to pressed (LOW)
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    delay(50); // Simple debounce delay
    if (digitalRead(BUTTON_PIN) == LOW) {
      pressCount++;
      lcd.setCursor(0, 0);
      lcd.print("Presses: ");
      lcd.print(pressCount);
      lcd.print("   ");
    }
  }

  lastButtonState = currentButtonState;
}