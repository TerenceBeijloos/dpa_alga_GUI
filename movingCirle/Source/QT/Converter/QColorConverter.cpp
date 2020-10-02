#include "../Headers/QT/Converter/QColorConverter.h"

QColor QColorConverter::convert(const std::string& color)
{
	return QColor{color.c_str()};
}
