#include "../../Headers/Strategies/YPropertyStrategy.h"
#include "../../Headers/Globals/Defines.h"
#include "../../Headers/Globals/TypeConverter.h"

YPropertyStrategy YPropertyStrategy::Instance(STR_Y);

YPropertyStrategy::YPropertyStrategy()
{
}

YPropertyStrategy::YPropertyStrategy(std::string id) : BPropertyStrategy(id)
{
}

YPropertyStrategy::~YPropertyStrategy()
{
}

void YPropertyStrategy::setProperty(AGalaxyEntity* _aGalaxyEntity, std::string _value)
{
	TypeConverter converter;
	_aGalaxyEntity->setY(converter.stringToInt(_value));
}

BPropertyStrategy* YPropertyStrategy::clone() const
{
	return new YPropertyStrategy;
}

