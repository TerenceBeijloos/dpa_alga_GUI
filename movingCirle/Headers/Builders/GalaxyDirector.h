#pragma once

#include <string>
#include <vector>
#include "../../Headers/GalaxyEntities/Astroid.h"

class GalaxyDirector
{
public:
	GalaxyDirector() = default;
	virtual ~GalaxyDirector() = default;

	//TODO: fill method
	void provideAstroid(const std::vector<std::string>&, Astroid&);

private:

};
