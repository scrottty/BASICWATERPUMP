
#include <Arduino.h>
#include "pump.h"

pump pump(6);
char c;

void setup()
{
Serial.begin(115200);
Serial.println("Begin Test");
}

void loop()
{
    if (Serial.available())
    {
        c = Serial.read();

        if( c == 'r')
        {
            pump.run();
            Serial.println("pump on");
        }

        else if(c == 's')
        {
            pump.stop();
            Serial.println("pump off");
        }
    }
    delayMicroseconds(100);
}