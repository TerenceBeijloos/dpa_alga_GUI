#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsView>
#include <QTimer>
#include "../Headers/QT/Timer/Timer.h"

class update : public ITimerMethod{
public:

    void someMethod(){
 
        QPointF point = _rect->pos();
        point.setX(-1*(_view->width()/2));
        point.setY(-1 * (_view->height() / 2));
        _rect->setPos(point);
    }

    void onTimerEvent() override{
        someMethod();
    }

    void setRect(QGraphicsEllipseItem* item){
        _rect = item;
    }

    void setView(QGraphicsView* view) {
        _view = view;
    }

    QGraphicsView* _view;
    QGraphicsEllipseItem* _rect;
};

//update* u = new update{};

//class timeTest : public QTimer{

//public:
//    QGraphicsEllipseItem* _item;
//    QTimer* timer;
//    void start(QGraphicsEllipseItem& item){
//        _item = &item;
//        timer = new QTimer(this);

//        connect(timer,&QTimer::timeout, u, &update::someMethod);
//        timer->start();
//    }

//    void amahoela(){
//        QPointF point = _item->pos();
//        point.setX(point.x()+5);
//        point.setY(point.y()+5);
//        _item->setPos(point);
//    }
//};


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene* scene  = new QGraphicsScene{};
    QGraphicsEllipseItem* rect =  new QGraphicsEllipseItem{};

    rect->setRect(-0,-0,10,10);
    QBrush brush;
    brush.setStyle(Qt::BrushStyle::SolidPattern);
    brush.setColor(Qt::blue);
    rect->setBrush(brush);
    scene->addItem(rect);

    QGraphicsView* view =  new QGraphicsView(scene);
    
    view->showFullScreen();

   
    Timer t;
    update* u = new update{};

    u->setRect(rect);
    u->setView(view);

    t.startTimer(u);

    return a.exec();
}
