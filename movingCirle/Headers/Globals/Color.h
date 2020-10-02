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
	//void setColor(const ColorEnum&);

	inline std::string getColorString() const { return this->_color; }
private:
	std::string _color;
	/*ColorEnum color;
	std::map<std::string, ColorEnum> colorMap;*/
};
