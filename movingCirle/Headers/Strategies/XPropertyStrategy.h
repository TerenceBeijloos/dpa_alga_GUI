#pragma once

#include "../../Headers/Strategies/BPropertyStrategy.h"
#include <string>

class XPropertyStrategy : public BPropertyStrategy
{
private:
	XPropertyStrategy();
	XPropertyStrategy(std::string id);
public:

	virtual ~XPropertyStrategy();

	void setProperty(AGalaxyEntity*,std::string) override;
	BPropertyStrategy* clone() const override;
private:
	static XPropertyStrategy Instance;
};

