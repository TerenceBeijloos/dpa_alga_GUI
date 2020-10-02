#include "../../Headers/GalaxyEntities/AGalaxyEntity.h"

AGalaxyEntity::AGalaxyEntity(const AGalaxyEntity& e) :
	_position{ e.getPosition() }, _vx{e.getVx()}, _vy{e.getVy()}, _radius{e.getRadius()}, _color{e.getColor()}
{
}

Position AGalaxyEntity::getPosition() const
{
	return _position;
}

void AGalaxyEntity::setPosition(const Position& position)
{
	_position = position;
}

void AGalaxyEntity::setX(const coördinateType& x)
{
	_position.x(x);
}

void AGalaxyEntity::setY(const coördinateType& y)
{
	_position.y(y);
}

void AGalaxyEntity::setVx(float vx)
{
	_vx = vx;
}

float AGalaxyEntity::getVx() const
{
	return _vx;
}

void AGalaxyEntity::setVy(float vy)
{
	_vy = vy;
}

float AGalaxyEntity::getVy() const
{
	return _vy;
}

void AGalaxyEntity::setRadius(radius radius)
{
	_radius = radius;
}

radius AGalaxyEntity::getRadius() const
{
	return _radius;
}

void AGalaxyEntity::setColor(const Color& color)
{
	_color = color;
}

void AGalaxyEntity::setColor(const std::string& color)
{
	_color.setColor(color);
}

Color AGalaxyEntity::getColor() const
{
	return _color;
}
