#pragma once

#include "Headers/Globals/Position.h"

#include <qpoint.h>
#include <QGraphicsView.h>

class QPositionConverter
{
public:
	QPositionConverter() = default;
	virtual ~QPositionConverter() = default;

	QPoint convert(const Position&,const viewSize&);
};
