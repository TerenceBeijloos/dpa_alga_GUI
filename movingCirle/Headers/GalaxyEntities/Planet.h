#pragma once
#include "../../Headers/GalaxyEntities/AGalaxyEntity.h"
#include <string>

class Planet : public AGalaxyEntity
{
public:
	Planet();
	Planet(const AGalaxyEntity&);
	virtual ~Planet();

	void setName(const std::string& name);
	std::string getName()const;
	Planet operator=(const AGalaxyEntity&);

private:
	std::string _name;
};

