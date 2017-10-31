#include "Arduino.h"
#include "BlinkyLed.h"

BlinkyLed::BlinkyLed(int _pin, int _blinkHighLenght, int _blinkLowLenght)
{
  pin = _pin;

  pinMode(pin, OUTPUT);

  blinkHighLength = _blinkHighLenght;
  blinkLowLength = _blinkLowLenght;

  lastBlink = 0;
  blinkState = LOW;
}

void BlinkyLed::updateLed()
{
  if (blinkState == LOW && millis() >= lastBlink + blinkLowLength) {
    blinkState = HIGH;
    lastBlink = millis();
    digitalWrite(pin, blinkState);
  }
  else if (blinkState == HIGH && millis() >= lastBlink + blinkHighLength) {
    blinkState = LOW;
    lastBlink = millis();
    digitalWrite(pin, blinkState);
  }
}
