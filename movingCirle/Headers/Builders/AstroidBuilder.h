#pragma once

#include <string>
#include "IGalaxyEntityBuilder.h"
#include "../../Headers/GalaxyEntities/Astroid.h"
#include "../../Headers/GalaxyEntities/AGalaxyEntity.h"

class AstroidBuilder : public IGalaxyEntityBuilder
{
protected:
	AstroidBuilder(std::string id);

public:
	AstroidBuilder() {};
	virtual ~AstroidBuilder() = default;

	AstroidBuilder* clone() const override;
	void insert(const std::vector<std::vector<std::string>>&, GalaxyEntityStorage&) override;
	void provide(const std::vector<std::vector<std::string>>&, AGalaxyEntity&) const;
private:
	static AstroidBuilder Instance;
};


