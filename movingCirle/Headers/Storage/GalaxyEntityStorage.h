#pragma once
#include "../GalaxyEntities/Planet.h"
#include "../GalaxyEntities/Astroid.h"
#include <list>

class GalaxyEntityStorage
{
private:

public:
	GalaxyEntityStorage() {};
	virtual ~GalaxyEntityStorage() {};

public:
	std::list<Planet> planets;
	std::list<Astroid> asteroids;
};


