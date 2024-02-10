#include <Arduino.h>

#define LED_PIN 2


void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("Hello from setup.");

  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
  Serial.println("Hello from the loop.");
}
