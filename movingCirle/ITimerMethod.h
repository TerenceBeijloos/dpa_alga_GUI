#ifndef ITIMERMETHOD_H
#define ITIMERMETHOD_H

#include <QTimer>

class ITimerMethod : public QTimer{
public:
    virtual void onTimerEvent() = 0;
};

#endif // ITIMERMETHOD_H
