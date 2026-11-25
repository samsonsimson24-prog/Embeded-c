#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int BUTTON_PIN = 7;
const int LED_PIN = 13;

bool ledState = false;
int lastButtonState = HIGH;

void updateDisplay() {
  lcd.setCursor(0, 0);
  lcd.print("LED Control");
  lcd.setCursor(0, 1);
  if (ledState) {
    lcd.print("Status: ON   ");
  } else {
    lcd.print("Status: OFF  ");
  }
}

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  lcd.begin(16, 2);
  updateDisplay();
}

void loop() {
  int currentButtonState = digitalRead(BUTTON_PIN);

  if (lastButtonState == HIGH && currentButtonState == LOW) {
    delay(50); // Debounce
    if (digitalRead(BUTTON_PIN) == LOW) {
      ledState = !ledState; // Toggle state
      digitalWrite(LED_PIN, ledState ? HIGH : LOW);
      updateDisplay();
    }
  }

  lastButtonState = currentButtonState;
}