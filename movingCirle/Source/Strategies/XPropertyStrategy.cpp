#include "../../Headers/Strategies/XPropertyStrategy.h"
#include "../../Headers/Globals/Defines.h"
#include "../../Headers/Globals/TypeConverter.h"

XPropertyStrategy XPropertyStrategy::Instance(STR_X);

XPropertyStrategy::XPropertyStrategy()
{
}

XPropertyStrategy::XPropertyStrategy(std::string id) : BPropertyStrategy(id)
{
}

XPropertyStrategy::~XPropertyStrategy()
{
}

void XPropertyStrategy::setProperty(AGalaxyEntity* _aGalaxyEntity, std::string _value)
{
	TypeConverter converter;
	_aGalaxyEntity->setX(converter.stringToInt(_value));
}

BPropertyStrategy* XPropertyStrategy::clone() const
{
	return new XPropertyStrategy;
}

