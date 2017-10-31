#include "Arduino.h"

class BlinkyLed
{
  public:
    BlinkyLed(int _pin, int _blinkHighLenght, int _blinkLowLenght);
    void updateLed();
    
    byte pin;
    int blinkHighLength;
    int blinkLowLength;
    bool blinkState;
    unsigned long lastBlink;

    private:
};
