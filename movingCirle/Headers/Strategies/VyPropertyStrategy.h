#pragma once

#include "../../Headers/Strategies/BPropertyStrategy.h"
#include <string>

class VyPropertyStrategy : public BPropertyStrategy
{
private:
	VyPropertyStrategy();
	VyPropertyStrategy(std::string id);
public:

	virtual ~VyPropertyStrategy();

	void setProperty(AGalaxyEntity*, std::string) override;
	BPropertyStrategy* clone() const override;
private:
	static VyPropertyStrategy Instance;
};

