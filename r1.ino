const int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Turn LED ON
  delay(500);                  // Wait 500 ms
  digitalWrite(LED_PIN, LOW);  // Turn LED OFF
  delay(500);                  // Wait 500 ms
}