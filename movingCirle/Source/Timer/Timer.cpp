#include "../Headers/Timer/Timer.h"

Timer::Timer() {
    _timer = new QTimer(this);
}

Timer::~Timer() {
    delete _timer;
}

void Timer::pauseTimer() {
    _timer->stop();
}

void Timer::resumeTimer() {
    _timer->start();
}

void Timer::startTimer(ITimerMethod* obj) {
    connect(_timer, &QTimer::timeout, obj, &ITimerMethod::onTimerEvent);
    _timer->start();
}
