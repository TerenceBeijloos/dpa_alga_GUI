#include "../../Headers/Strategies/BPropertyStrategy.h"

BPropertyStrategy::BPropertyStrategy(std::string id)
{
	Factory::FactoryMethod<std::string, BPropertyStrategy>::assign(id, this);
}
