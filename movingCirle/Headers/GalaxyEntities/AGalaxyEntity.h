#pragma once
#pragma once
#include "../../Headers/Globals/Color.h"
#include "IGalaxyEntity.h"

class AGalaxyEntity : public IGalaxyEntity
{
public:
	AGalaxyEntity() = default;
	AGalaxyEntity(const AGalaxyEntity&);
	virtual ~AGalaxyEntity() = default;

    virtual Position getPosition() const;
    virtual void setPosition(const Position&) override;
    virtual void setX(const coördinateType&) override;
    virtual void setY(const coördinateType&) override;

    virtual void setVx(float _vx) override;
    virtual float getVx() const override;

    virtual void setVy(float _vy) override;
    virtual float getVy() const override;

    virtual void setRadius(radius _radius) override;
    virtual radius getRadius() const override;

    virtual void setColor(const Color& _color) override;
    virtual void setColor(const std::string& _color) override;
    virtual Color getColor() const override;

protected:
    Position _position;
    //TODO: velocity class
	float _vx;
	float _vy;
	radius _radius;
	Color _color;
};

