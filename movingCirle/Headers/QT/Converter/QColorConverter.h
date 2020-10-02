#pragma once

#include <qcolor.h>

class QColorConverter
{
public:
	QColorConverter() = default;
	virtual ~QColorConverter() = default;

	//TODO: string_view
	QColor convert(const std::string&);
};

