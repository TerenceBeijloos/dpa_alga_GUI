#pragma once
#include "Defines.h"
#include <string>
#include <map>

class Color
{
public:
	Color();
	virtual ~Color() = default;

	ColorEnum stringToColorEnum(const std::string&) const;

	void setColor(const std::string&);
	void setColor(const ColorEnum&);

	inline ColorEnum getColor() const { return this->color; }

private:
	ColorEnum color;
	std::map<std::string, ColorEnum> colorMap;
};
