#pragma once

#include <string>
#include "../../Headers/GalaxyEntities/AGalaxyEntity.h"
#include "../../Headers/Factories/FactoryMethod.h"

class BPropertyStrategy
{
protected:
	BPropertyStrategy() {};
	BPropertyStrategy(std::string id);

public:
	virtual ~BPropertyStrategy()	= default;
	//TODO: use & instead of *
	virtual void setProperty(AGalaxyEntity*,std::string) = 0;
	virtual BPropertyStrategy* clone() const = 0;
private:

};


