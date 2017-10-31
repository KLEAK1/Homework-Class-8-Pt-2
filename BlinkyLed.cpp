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
  if (millis() >= lastBlink + blinkHighLength) {

    Serial.println(lastBlink);

    lastBlink = millis();

    if (blinkState == LOW) {
      blinkState = HIGH;
    } else if (blinkState == HIGH) {
      blinkState = LOW;
    }

    digitalWrite(pin, blinkState);
  }
}
