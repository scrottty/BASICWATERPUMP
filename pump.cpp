#include <Arduino.h>
#include "pump.h"



pump::pump(int _pinNumber)
{
    pinNumber = _pinNumber;
    pinMode(pinNumber,OUTPUT);
    pinMode(LED_BUILTIN, OUTPUT);
}

void pump::routine()
{
    Serial.println("Starting Routine");

    // Flood every 3 hours for fill time
    unsigned long WAITTIME = 3 * stopwatch.ONE_HOUR;
    unsigned long FILLTIME = 2 * stopwatch.ONE_MINUTE + 30 * stopwatch.ONE_SECOND;

    bool blinkState = true;

    while (true)
    {
        // Fill the system
        run();
        Serial.print("Filling for ");
        Serial.println(FILLTIME);
        stopwatch.start(FILLTIME);
        while (stopwatch.IsRunning())
        {
            Serial.print(stopwatch.GetElapsed());
            Serial.print(" of ");
            Serial.println(FILLTIME);

            digitalWrite(LED_BUILTIN, blinkState);
            blinkState = !blinkState;

            delay(stopwatch.ONE_SECOND/2);
        }

        // Settle the system
        stop();
        Serial.print("Waiting for ");
        Serial.println(WAITTIME);
        stopwatch.start(WAITTIME);
        while (stopwatch.IsRunning())
        {
            Serial.println("B");
            digitalWrite(LED_BUILTIN, blinkState);
            blinkState = !blinkState;

            delay(2*stopwatch.ONE_SECOND);
        }
    }
}

void pump::run()
{
    Serial.println("running");
    digitalWrite(pinNumber,HIGH);
}


void pump::stop()
{
    Serial.println("Stopping");
    digitalWrite(pinNumber,LOW);
}