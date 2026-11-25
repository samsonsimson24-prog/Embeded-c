const int leds[4] = {8, 9, 10, 11};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(leds[i], HIGH); // Turn current LED ON
    delay(200);
    digitalWrite(leds[i], LOW);  // Turn current LED OFF
  }
}