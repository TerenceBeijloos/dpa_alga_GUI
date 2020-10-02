#include "../../Headers/Builders/AstroidBuilder.h"
#include "../../Headers/Strategies/BPropertyStrategy.h"
#include "../../Headers/Globals/Defines.h"

AstroidBuilder AstroidBuilder::Instance(STR_ASTEROID);

AstroidBuilder::AstroidBuilder(std::string id) : IGalaxyEntityBuilder(id)
{
}

AstroidBuilder* AstroidBuilder::clone() const
{
	return new AstroidBuilder;
}

void AstroidBuilder::insert(const std::vector<std::vector<std::string>>& data, GalaxyEntityStorage& storage)
{
	Astroid astroid;
	this->provide(data,astroid);
	storage.astroids.push_back(astroid);
}

void AstroidBuilder::provide(const std::vector<std::vector<std::string>>& data, AGalaxyEntity& astroid) const
{
	for (auto& it : data) {
		BPropertyStrategy* astroidSetter = Factory::FactoryMethod<std::string, BPropertyStrategy>::create(it[0]);

		if (astroidSetter)
		{
			astroidSetter->setProperty(&astroid, it[1]);
			delete astroidSetter;
		}
	}
}

