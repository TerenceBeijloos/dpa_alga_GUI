#pragma once
#include "Defines.h"

class Position
{
public:
	Position();
	Position(const coördinateType&, const coördinateType&);
	virtual ~Position() {};

	coördinateType x() const;
	coördinateType y() const;

	void x(const coördinateType&);
	void y(const coördinateType&);

	void set(const Position&);
	void add(int x, int y);

	bool operator!=(const Position&);

private:
	coördinateType _x;
	coördinateType _y;
};
