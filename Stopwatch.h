#ifndef __STOPWATCH_H__
#define __STOPWATCH_H__

class Stopwatch
{
    public:
        Stopwatch();
        void start(int length);
        int GetElapsed();
        bool IsRunning();

        int ONE_SECOND = 1 * 1000;
        int ONE_MINUTE = 1 * 60 * ONE_SECOND;
        int ONE_HOUR = 1 * 60 * ONE_MINUTE;

    private:
        bool isRunning = false;
        unsigned long StartTime;
        int threshold;
};




#endif //___STOPWATCH_H__