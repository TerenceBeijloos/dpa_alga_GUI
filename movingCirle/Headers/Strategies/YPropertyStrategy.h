#pragma once

#include "../../Headers/Strategies/BPropertyStrategy.h"
#include <string>

class YPropertyStrategy : public BPropertyStrategy
{
private:
	YPropertyStrategy();
	YPropertyStrategy(std::string id);
public:
	virtual ~YPropertyStrategy();

	void setProperty(AGalaxyEntity*, std::string) override;
	BPropertyStrategy* clone() const override;
private:
	static YPropertyStrategy Instance;
};

