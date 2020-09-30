#pragma once

#include <QTimer>
#include "update.h"
#include "ITimerMethod.h"

class timer : public QTimer{
public:
    timer();
    virtual ~timer();

    void pauseTimer();
    void resumeTimer();

    void startTimer(ITimerMethod*);

private:
    QTimer* _timer;
};

