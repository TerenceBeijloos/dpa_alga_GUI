#pragma once
#include <vector>
#include "../GalaxyEntities/IGalaxyEntity.h"
#include "../Globals/Position.h"

class GalaxyEntityStorage;

class GalaxyMap
{
public:
	GalaxyMap();
	virtual ~GalaxyMap() {};

	void update(GalaxyEntityStorage&);
	void print();
private:
	void clear();

	void insert(IGalaxyEntity*);
	void insert(IGalaxyEntity*, const Position&);
	void fillCircle(const Position&, IGalaxyEntity*);

	bool outOfBound(const Position&, bool generateException = true) const;
private:
	std::vector<std::vector<IGalaxyEntity*>> _map;
};