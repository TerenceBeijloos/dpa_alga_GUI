#pragma once

#include <QGraphicsEllipseItem>
#include "Headers/GalaxyEntities/AGalaxyEntity.h"
#include "../Headers/Globals/Defines.h"

class GraphicsItem {
public:
	GraphicsItem(const AGalaxyEntity&, const viewSize&);

	const QGraphicsEllipseItem& getGraphicsItem() const;
	void copy();

private:
	void copyPosition();
	void copyColor();
	void copyRadius();

private:
	//Order is important because _galaxyEntity is needed to construct _qGraphicsItem
	const AGalaxyEntity* _galaxyEntity;
	QGraphicsEllipseItem* _qGraphicsItem;
	viewSize _viewSize;
};
