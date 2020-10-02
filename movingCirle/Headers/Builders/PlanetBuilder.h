#pragma once

#include <string>
#include "IGalaxyEntityBuilder.h"
#include "../../Headers/GalaxyEntities/Planet.h"

class PlanetBuilder : public IGalaxyEntityBuilder
{
protected:
	PlanetBuilder() {};
	PlanetBuilder(std::string id);

private:
	void provide(const std::vector<std::vector<std::string>>&,Planet&) const;
public:
	virtual ~PlanetBuilder() = default;

	PlanetBuilder* clone() const override;
	void insert(const std::vector<std::vector<std::string>>&, GalaxyEntityStorage&) override;

private:
	static PlanetBuilder Instance;
};


