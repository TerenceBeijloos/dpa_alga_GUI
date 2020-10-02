#pragma once
#include "../Globals/Color.h"
#include "../Decorators/BOnCollision.h"
#include "../Globals/Position.h"
#include "../Globals/Defines.h"

class IGalaxyEntity
{
public:
    virtual ~IGalaxyEntity() = default;

    virtual Position getPosition() const = 0;
    virtual void setPosition(const Position&) = 0;
    virtual void setX(const coördinateType&) = 0;
    virtual void setY(const coördinateType&) = 0;

    virtual void setVx(float _vx) = 0;
    virtual float getVx() const = 0;

    virtual void setVy(float _vy) = 0;
    virtual float getVy() const = 0;
    
    virtual void setRadius(radius _radius) = 0;
    virtual radius getRadius() const = 0;

    virtual void setColor(const Color& _color) = 0;
    virtual void setColor(const std::string& _color) = 0;
    virtual void setColor(const ColorEnum& _color) = 0;
    virtual Color getColor() const = 0;
};