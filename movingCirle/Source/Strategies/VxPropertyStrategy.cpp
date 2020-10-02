#include "../../Headers/Strategies/VxPropertyStrategy.h"
#include "../../Headers/Globals/Defines.h"
#include "../../Headers/Globals/TypeConverter.h"

VxPropertyStrategy VxPropertyStrategy::Instance(STR_VX);

VxPropertyStrategy::VxPropertyStrategy()
{
}

VxPropertyStrategy::VxPropertyStrategy(std::string id) : BPropertyStrategy(id)
{
}

float VxPropertyStrategy::stringToFloat(const std::string&)
{
	return 0.0f;
}

VxPropertyStrategy::~VxPropertyStrategy()
{
}

void VxPropertyStrategy::setProperty(AGalaxyEntity* _aGalaxyEntity, std::string _value)
{
	TypeConverter converter;
	_aGalaxyEntity->setVx(converter.stringToFloat(_value));
}

BPropertyStrategy* VxPropertyStrategy::clone() const
{
	return new VxPropertyStrategy;
}

