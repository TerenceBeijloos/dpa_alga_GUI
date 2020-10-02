#pragma once
#include "../../Headers/Strategies/BPropertyStrategy.h"
#include "../../Headers/GalaxyEntities/Planet.h"

class BPlanetPropertyStratergy
{
protected:
	BPlanetPropertyStratergy();
	BPlanetPropertyStratergy(std::string id);
public:

	virtual ~BPlanetPropertyStratergy();

	virtual void setProperty(Planet*, const std::string&) = 0;
	virtual BPlanetPropertyStratergy* clone() const = 0;
private:

};

