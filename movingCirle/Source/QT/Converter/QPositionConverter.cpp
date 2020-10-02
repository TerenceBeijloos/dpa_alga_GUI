#include "../Headers/QT/Converter/QPositionConverter.h"

QPoint QPositionConverter::convert(const Position& position, const viewSize& view)
{
    QPoint point;

    point.setX(position.x()-(view.width/2));
    point.setY(position.y()-(view.height/2));

    return point;
}
