#pragma once

#include "../../Headers/Strategies/BPropertyStrategy.h"
#include <string>

class VxPropertyStrategy : public BPropertyStrategy
{
private:
	VxPropertyStrategy();
	VxPropertyStrategy(std::string id);

	float stringToFloat(const std::string&);
public:

	virtual ~VxPropertyStrategy();

	void setProperty(AGalaxyEntity*, std::string) override;
	BPropertyStrategy* clone() const override;
private:
	static VxPropertyStrategy Instance;
};

