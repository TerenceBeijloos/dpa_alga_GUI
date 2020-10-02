#pragma once

#include "../../Headers/Strategies/BPropertyStrategy.h"
#include <string>

class RadiusPropertyStrategy : public BPropertyStrategy
{
private:
	RadiusPropertyStrategy();
	RadiusPropertyStrategy(std::string id);
public:

	virtual ~RadiusPropertyStrategy();

	void setProperty(AGalaxyEntity*, std::string) override;
	BPropertyStrategy* clone() const override;
private:
	static RadiusPropertyStrategy Instance;
};

