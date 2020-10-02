#pragma once
#include "../../Headers/GalaxyEntities/Planet.h"
#include "../../Headers/GalaxyEntities/Astroid.h"
#include <vector>

class GalaxyEntityStorage
{
public:
	GalaxyEntityStorage() {};
	virtual ~GalaxyEntityStorage() {};

public:
	std::vector<Planet> planets;
	std::vector<Astroid> astroids;
};
