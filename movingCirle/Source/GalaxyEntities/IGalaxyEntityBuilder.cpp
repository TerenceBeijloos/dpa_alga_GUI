#include "../../Headers/Builders/IGalaxyEntityBuilder.h"

IGalaxyEntityBuilder::IGalaxyEntityBuilder(std::string id)
{
	Factory::FactoryMethod<std::string, IGalaxyEntityBuilder>::assign(id, this);
}
