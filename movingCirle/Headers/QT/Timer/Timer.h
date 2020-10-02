#pragma once

#include <QTimer>
#include "ITimerMethod.h"

class Timer : public QTimer {
public:
    Timer();
    virtual ~Timer();

    void pauseTimer();
    void resumeTimer();

    void startTimer(ITimerMethod*);

private:
    QTimer* _timer;
};
