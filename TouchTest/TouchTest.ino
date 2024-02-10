#include <_Teensy.h>

/* Using just a wire or jumper doesn't work too well for capacitive sensing! */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(touchRead(4));     // get value of Touch 0 pin = GPIO 4
  Serial.print(",");
  Serial.println(touchRead(15));  // get value of Touch 3 pin = GPIO 15
  delay(50);
}
