#include "../../Headers/Globals/Position.h"

Position::Position() :
	_x{ 0 }, _y{ 0 }
{
}

Position::Position(const coördinateType& x, const coördinateType& y) :
	_x(x),_y(y)
{
}

coördinateType Position::x() const
{
	return _x;
}

coördinateType Position::y() const
{
	return _y;
}

void Position::x(const coördinateType& x)
{
	_x = x;
}

void Position::y(const coördinateType& y)
{
	_y = y;
}

void Position::set(const Position& position)
{
	_x = position.x();
	_y = position.y();
}

void Position::add(int x, int y)
{
	if ((_x + x) > 0)
	{
		_x += x;
	}
	if ((_y + y) > 0)
	{
		_y += y;
	}
}

bool Position::operator!=(const Position& other)
{
	return (this->x() != other.x() || this->y() != other.y());
}

