/* Connect to WiFi by non-blocking mode
  Very high serial port baud rates do not work well! */

#include <Arduino.h>
#include <WiFi.h>

#define LED_PIN 2
#define WIFI_SSID "Backyard"
#define WIFI_PASSWORD "Fahrenheit451!"

bool isConnected = false;

void setup() {

  Serial.begin(9600);
  // while(!Serial);

  Serial.println("Starting connection to WiFi ...");
  Serial.println(".");

  pinMode(LED_PIN, OUTPUT);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
}

void loop() {
  // When the connection drops, need to set the connection flag to false
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println(".");
    Serial.println("Trying to connect to WiFi...");
    Serial.println(".");
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(1500);
    isConnected = false;
  }

  // When the connection is made, enter the following loop once only
  if (WiFi.status() == WL_CONNECTED && !isConnected) {
    Serial.println("Connected to WiFi!");
    digitalWrite(LED_PIN, HIGH);
    isConnected = true;
  }
}