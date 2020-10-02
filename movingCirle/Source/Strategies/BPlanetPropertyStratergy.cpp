#include "../../Headers/Strategies/BPlanetPropertyStratergy.h"

BPlanetPropertyStratergy::BPlanetPropertyStratergy()
{
}

BPlanetPropertyStratergy::BPlanetPropertyStratergy(std::string id)
{
	Factory::FactoryMethod<std::string, BPlanetPropertyStratergy>::assign(id, this);
}

BPlanetPropertyStratergy::~BPlanetPropertyStratergy()
{
}
