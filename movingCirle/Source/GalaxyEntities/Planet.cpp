#include "../../Headers/GalaxyEntities/Planet.h"

Planet::Planet() :
    _name{""}
{
}

Planet::Planet(const AGalaxyEntity& entity) : AGalaxyEntity(entity)
{
}

Planet::~Planet()
{
}

void Planet::setName(const std::string& name)
{
    _name = name;
}

std::string Planet::getName() const
{
    return _name;
}

Planet Planet::operator=(const AGalaxyEntity& entity)
{
    return Planet(entity);
}
