#ifndef PUMP_H
#define PUMP_H

#include <Arduino.h>

class pump
{
    public:
        pump(int pinNumber);
        void run();
        void stop();

    private:
        int pinNumber;
};


#endif 
