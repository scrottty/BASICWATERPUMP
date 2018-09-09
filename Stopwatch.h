#ifndef __STOPWATCH_H__
#define __STOPWATCH_H__

class Stopwatch
{
    public:
        Stopwatch();
        void start(unsigned long length);
        unsigned long GetElapsed();
        bool IsRunning();

        unsigned long ONE_SECOND = 1 * 1000;
        unsigned long ONE_MINUTE = 1 * 60 * ONE_SECOND;
        unsigned long ONE_HOUR = 1 * 60 * ONE_MINUTE;

    private:
        bool isRunning = false;
        unsigned long StartTime;
        unsigned long threshold;
};




#endif //___STOPWATCH_H__