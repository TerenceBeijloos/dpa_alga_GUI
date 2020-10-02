#include "../../Headers/Strategies/RadiusPropertyStrategy.h"
#include "../../Headers/Globals/Defines.h"
#include "../../Headers/Globals/TypeConverter.h"

RadiusPropertyStrategy RadiusPropertyStrategy::Instance(STR_RADIUS);

RadiusPropertyStrategy::RadiusPropertyStrategy()
{
}

RadiusPropertyStrategy::RadiusPropertyStrategy(std::string id) : BPropertyStrategy(id)
{
}

RadiusPropertyStrategy::~RadiusPropertyStrategy()
{
}

void RadiusPropertyStrategy::setProperty(AGalaxyEntity* _aGalaxyEntity, std::string _value)
{
	TypeConverter converter;
	_aGalaxyEntity->setRadius(converter.stringToInt(_value));
}

BPropertyStrategy* RadiusPropertyStrategy::clone() const
{
	return new RadiusPropertyStrategy;
}

