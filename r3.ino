const int BUTTON_PIN = 7;
const int LED_PIN = 13;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP); // LOW when pressed
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    digitalWrite(LED_PIN, HIGH); // LED ON while pressed
  } else {
    digitalWrite(LED_PIN, LOW);  // LED OFF when released
  }
}