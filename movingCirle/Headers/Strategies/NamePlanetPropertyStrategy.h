#pragma once
#include "../../Headers/Strategies/BPlanetPropertyStratergy.h"

class NamePlanetPropertyStrategy : BPlanetPropertyStratergy
{
private:
	NamePlanetPropertyStrategy() = default;
	NamePlanetPropertyStrategy(std::string id);
public:
	virtual ~NamePlanetPropertyStrategy() = default;

	void setProperty(Planet*, const std::string&) override;
	BPlanetPropertyStratergy* clone() const override;

private:
	static NamePlanetPropertyStrategy Instance;
};
