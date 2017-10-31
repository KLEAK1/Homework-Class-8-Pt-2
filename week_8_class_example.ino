#include "BlinkyLed.h"

BlinkyLed b1(12, 500, 500);
BlinkyLed b2(10, 100, 100);
BlinkyLed b3(8, 1000, 2000);
BlinkyLed b4(6, 2000, 1000);

void setup() {
  Serial.begin(9600);
}

void loop() {
  b1.updateLed();
  b2.updateLed();
  b3.updateLed();
  b4.updateLed();
}
