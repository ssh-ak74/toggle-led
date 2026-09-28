#include <Arduino.h>
#define LED_PIN 25
#define BUTTON_PIN 27

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  static bool ledState = false;
  static bool lastButtonState = HIGH;

  bool buttonState = digitalRead(BUTTON_PIN);

  if (lastButtonState == HIGH && buttonState == LOW) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    delay(50); // debounce
  }

  lastButtonState = buttonState;
}
