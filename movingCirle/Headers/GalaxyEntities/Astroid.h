#pragma once
#include "../../Headers/Globals/Color.h"
#include "../../Headers/Decorators/BOnCollision.h"
#include "../../Headers/GalaxyEntities/AGalaxyEntity.h"

class Astroid : public AGalaxyEntity
{
public:
	Astroid() = default;
	Astroid(const AGalaxyEntity&);
	virtual ~Astroid()	= default;
};

