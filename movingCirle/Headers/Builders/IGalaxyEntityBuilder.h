#pragma once
#include <vector>
#include <string>
#include "../../Headers/Factories/FactoryMethod.h"
#include "../../Headers/Strategies/GalaxyEntityStorage.h"

class IGalaxyEntityBuilder
{
protected:
	IGalaxyEntityBuilder() {};
	IGalaxyEntityBuilder(std::string id);
public:
	virtual ~IGalaxyEntityBuilder() {};

	virtual void insert(const std::vector<std::vector<std::string>>&,GalaxyEntityStorage&) = 0;

	virtual IGalaxyEntityBuilder* clone() const = 0;
private:
	
};
