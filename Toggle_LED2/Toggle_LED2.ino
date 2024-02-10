// Toggle LED on ESP32 board

#define LED_PIN 2 

void setup() {
  // put your setup code here, to run once:
pinMode(LED_PIN, OUTPUT);    // sets the digital pin 2 as output

digitalWrite(LED_PIN, LOW); //  Start with pin low
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0; i < 250; i = i + 10){

    digitalWrite(LED_PIN, HIGH); // sets the digital pin 13 on
    delay(i);            // waits for a second
    digitalWrite(LED_PIN, LOW);  // sets the digital pin 13 off
    delay(i);            // waits for a second
  }
}
