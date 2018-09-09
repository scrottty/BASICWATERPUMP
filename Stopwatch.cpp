#include <Arduino.h>
#include "Stopwatch.h"

Stopwatch::Stopwatch()
{

}

void Stopwatch::start(unsigned long length)
{
    threshold = length;
    StartTime = millis();
}

unsigned long Stopwatch::GetElapsed()
{
    return (millis() - StartTime);
}

bool Stopwatch::IsRunning()
{
    return (GetElapsed() < threshold);
}