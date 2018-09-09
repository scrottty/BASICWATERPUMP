#ifndef PUMP_H
#define PUMP_H

#include <Arduino.h>
#include "Stopwatch.h"

class pump
{
    public:
        pump(int pinNumber);
        void routine();
        void run();
        void stop();

    private:
        int pinNumber;
        Stopwatch stopwatch;
};


#endif 
