#include "Stopwatch.h"

Stopwatch::Stopwatch()
{

}

void Stopwatch::start(int length)
{
    threshold = length;
    StartTime = millis();
}

int Stopwatch::GetElapsed()
{
    return (int)(millis() - StartTime);
}

bool Stopwatch::IsRunning()
{
    return GetElapsed > threshold;
}