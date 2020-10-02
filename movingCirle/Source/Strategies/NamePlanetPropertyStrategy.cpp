#include "../../Headers/Strategies/NamePlanetPropertyStrategy.h"
#include "../../Headers/Globals/Defines.h"

NamePlanetPropertyStrategy NamePlanetPropertyStrategy::Instance(STR_NAME);

NamePlanetPropertyStrategy::NamePlanetPropertyStrategy(std::string id) : BPlanetPropertyStratergy(id)
{
}

void NamePlanetPropertyStrategy::setProperty(Planet* _planet, const std::string& _value)
{
	_planet->setName(_value);
}

BPlanetPropertyStratergy* NamePlanetPropertyStrategy::clone() const
{
	return new NamePlanetPropertyStrategy;
}
