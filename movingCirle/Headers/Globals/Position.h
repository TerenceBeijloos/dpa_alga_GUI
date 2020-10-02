#pragma once
#include "Defines.h"

class Position
{
public:
	Position();
	Position(const co�rdinateType&, const co�rdinateType&);
	virtual ~Position() {};

	co�rdinateType x() const;
	co�rdinateType y() const;

	void x(const co�rdinateType&);
	void y(const co�rdinateType&);

	void set(const Position&);
	void add(int x, int y);

	bool operator!=(const Position&);

private:
	co�rdinateType _x;
	co�rdinateType _y;
};
