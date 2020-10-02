#include "../../Headers/Strategies/ColorPropertyStrategy.h"
#include "../../Headers/Globals/Defines.h"

ColorPropertyStrategy ColorPropertyStrategy::Instance(STR_COLOR);

ColorPropertyStrategy::ColorPropertyStrategy()
{
}

ColorPropertyStrategy::ColorPropertyStrategy(std::string id) : BPropertyStrategy(id)
{
}

ColorPropertyStrategy::~ColorPropertyStrategy()
{
}

void ColorPropertyStrategy::setProperty(AGalaxyEntity* _astroid, std::string _value)
{
	_astroid->setColor(_value);
}

BPropertyStrategy* ColorPropertyStrategy::clone() const
{
	return new ColorPropertyStrategy;
}

