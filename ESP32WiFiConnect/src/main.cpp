/* Connect to WiFi by blocking mode */

#include <Arduino.h>
#include <WiFiMulti.h>

#define LED_PIN 2
#define WIFI_SSID "Backyard"
#define WIFI_PASSWORD "Fahrenheit451!"

WiFiMulti wifiMulti;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);

  wifiMulti.addAP(WIFI_SSID, WIFI_PASSWORD);

  while (wifiMulti.run() != WL_CONNECTED) {
    delay(100);
  }
  Serial.println("Connected to WiFi!!!");
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_PIN, WiFi.status() == WL_CONNECTED);
}
