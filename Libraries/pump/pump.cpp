#include <Arduino.h>
#include "pump.h"

pump::pump(int pinNumber)
{
    pinMode(pinNumber,OUTPUT);
}

void pump::run()
{
    digitalWrite(pinNumber,HIGH);
}

void pump::stop()
{
    digitalWrite(pinNumber,LOW);
}