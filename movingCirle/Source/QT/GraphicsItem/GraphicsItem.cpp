#include "../Headers/QT/GraphicsItem/GraphicsItem.h"

#include "Headers/QT/Converter/QColorConverter.h"
#include "Headers/QT/Converter/QPositionConverter.h"

#include <qbrush.h>
#include <qpen.h>

GraphicsItem::GraphicsItem(const AGalaxyEntity& entity, const viewSize& view) :
	_galaxyEntity{ &entity }, _qGraphicsItem{ new QGraphicsEllipseItem{} }, _viewSize{view}
{
	this->copy();

	_qGraphicsItem->setPen(Qt::NoPen);
}

const QGraphicsEllipseItem& GraphicsItem::getGraphicsItem() const
{
	return *_qGraphicsItem;
}

void GraphicsItem::copy()
{
	if (!_galaxyEntity)
	{
		//TODO: error?
		return;
	}
	
	this->copyPosition();
	this->copyColor();
	this->copyRadius();

}

void GraphicsItem::copyPosition()
{
	QPositionConverter converter;
	QPoint position = converter.convert(_galaxyEntity->getPosition(),_viewSize);
}

void GraphicsItem::copyColor()
{
	QBrush brush;
	QColorConverter converter;

	brush.setColor(converter.convert(_galaxyEntity->getColor().getColorString()));
	brush.setStyle(Qt::BrushStyle::SolidPattern);

	_qGraphicsItem->setBrush(brush);
}

void GraphicsItem::copyRadius()
{
	_qGraphicsItem->setRect(0, 0, _galaxyEntity->getRadius(), _galaxyEntity->getRadius());
}
