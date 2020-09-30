#include "timer.h"

timer::timer(){
    _timer = new QTimer(this);
}

timer::~timer(){
    delete _timer;
}

void timer::pauseTimer(){
    _timer->stop();
}

void timer::resumeTimer(){
    _timer->start();
}

void timer::startTimer(ITimerMethod* obj){
    connect(_timer,&QTimer::timeout, obj, &ITimerMethod::onTimerEvent);
    _timer->start();
}
