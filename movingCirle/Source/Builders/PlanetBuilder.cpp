#include "../../Headers/Builders/PlanetBuilder.h"
#include "../../Headers/Globals/Defines.h"
#include "../../Headers/GalaxyEntities/Planet.h"
#include "../../Headers/Builders/AstroidBuilder.h"
#include "../../Headers/Strategies/BPropertyStrategy.h"
#include "../../Headers/Strategies/BPlanetPropertyStratergy.h"

PlanetBuilder PlanetBuilder::Instance(STR_PLANET);

PlanetBuilder::PlanetBuilder(std::string id) : IGalaxyEntityBuilder(id)
{
}

void PlanetBuilder::provide(const std::vector<std::vector<std::string>>& data, Planet& planet) const
{
	AstroidBuilder* builder = new AstroidBuilder;
	builder->provide(data, planet);

	for (auto& it : data) {
		BPlanetPropertyStratergy* planetSetter = Factory::FactoryMethod<std::string, BPlanetPropertyStratergy>::create(it[0]);

		if (planetSetter)
		{
			planetSetter->setProperty(&planet, it[1]);
			delete planetSetter;
		}
	}
}

PlanetBuilder* PlanetBuilder::clone() const
{
	return new PlanetBuilder;
}

void PlanetBuilder::insert(const std::vector<std::vector<std::string>>& data, GalaxyEntityStorage& storage)
{
	Planet planet;
	this->provide(data, planet);
	storage.planets.push_back(planet);
}


