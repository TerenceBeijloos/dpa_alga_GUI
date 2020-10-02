#pragma once

#include "../../Headers/Strategies/BPropertyStrategy.h"
#include <string>

class ColorPropertyStrategy : public BPropertyStrategy
{
private:
	ColorPropertyStrategy();
	ColorPropertyStrategy(std::string id);
public:

	virtual ~ColorPropertyStrategy();

	void setProperty(AGalaxyEntity*, std::string) override;
	BPropertyStrategy* clone() const override;
private:
	static ColorPropertyStrategy Instance;
};

