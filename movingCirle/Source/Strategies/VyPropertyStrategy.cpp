#include "../../Headers/Strategies/VyPropertyStrategy.h"
#include "../../Headers/Globals/Defines.h"
#include "../../Headers/Globals/TypeConverter.h"

VyPropertyStrategy VyPropertyStrategy::Instance(STR_VY);

VyPropertyStrategy::VyPropertyStrategy()
{
}

VyPropertyStrategy::VyPropertyStrategy(std::string id) : BPropertyStrategy(id)
{
}

VyPropertyStrategy::~VyPropertyStrategy()
{
}

void VyPropertyStrategy::setProperty(AGalaxyEntity* _aGalaxyEntity, std::string _value)
{
	TypeConverter converter;
	_aGalaxyEntity->setVy(converter.stringToFloat(_value));
}

BPropertyStrategy* VyPropertyStrategy::clone() const
{
	return new VyPropertyStrategy;
}

