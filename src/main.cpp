#include <Arduino.h>

// put function declarations here:
void setup() {
  pinMode(2, OUTPUT);  // LED_BUILTIN em muitos ESP32 DOIT
}

void loop() {
  digitalWrite(2, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  delay(500);
}
