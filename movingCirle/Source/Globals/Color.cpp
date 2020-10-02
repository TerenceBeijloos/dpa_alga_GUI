#include "../../Headers/Globals/Color.h"

Color::Color()
{
	color = ColorEnum::black;

	for (unsigned int i = 0; i < COLOR_BINDINGS.size(); i++)
	{
		colorMap.insert(COLOR_BINDINGS[i]);
	}
}

//TODO: what happens upon error? temp solution return black
ColorEnum Color::stringToColorEnum(const std::string& _str) const
{
	auto it = colorMap.find(_str);

	if (it == colorMap.end())
	{
		return ColorEnum::black;//Error
	}
	
	return colorMap.at(_str);;
}

void Color::setColor(const std::string& _colorString)
{
	this->color = this->stringToColorEnum(_colorString);
}

void Color::setColor(const ColorEnum& _color)
{
	this->color = _color;
}
