#include "../../Headers/Storage/GalaxyMap.h"
#include "../../Headers/Storage/GalaxyEntityStorage.h"
#include <iostream>


GalaxyMap::GalaxyMap()
{
	_map.resize(SCREEN_SIZE.x);

	for (auto& it : _map)
	{
		it.resize(SCREEN_SIZE.y);
	}
}

void GalaxyMap::update(GalaxyEntityStorage& storage)
{
	this->clear();
	for (auto it : storage.planets)
	{
		this->insert(&it);
	}
	for (auto it : storage.asteroids)
	{
		this->insert(&it);
	}
}

void GalaxyMap::print()
{
	for (unsigned int y = 0; y < SCREEN_SIZE.y; y++)
	{
		for (unsigned int x = 0; x < SCREEN_SIZE.x; x++) {
			if (_map[x][y])
			{
				std::cout << "@";
			}
			else
			{
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}
}

void GalaxyMap::clear()
{
	for (auto it : _map)
	{
		for (auto itIt : it) {
			itIt = nullptr;
		}
	}
}

void GalaxyMap::insert(IGalaxyEntity* entity)
{
	this->fillCircle(entity->getPosition(), entity);
}

void GalaxyMap::insert(IGalaxyEntity* entity, const Position& place)
{
	outOfBound(place);
	this->_map[place.x()][place.y()] = entity;
}

void GalaxyMap::fillCircle(const Position& position, IGalaxyEntity* entity)
{
	// Consider a rectangle of size N*N 
	coördinateType r = entity->getRadius();
	coördinateType N = 2 * r + 1;

	coördinateType x, y;  // Coordinates inside the rectangle 

	// Draw a square of size N*N. 
	for (coördinateType i = 0; i < N; i++)
	{
		for (coördinateType j = 0; j < N; j++)
		{
			// Start from the left most corner point 
			x = i - r;
			y = j - r;

			// If this point is inside the circle, print it 
			if (x * x + y * y <= r * r + 1) {
				this->insert(entity, { x + position.x(), y + position.y() });
			}
		}
	}
}

bool GalaxyMap::outOfBound(const Position& place, bool generateException) const
{
	if (generateException && (place.x() > SCREEN_SIZE.x || place.y() > SCREEN_SIZE.y))
	{
		throw "position is not valid";
	}
	return (place.x() > SCREEN_SIZE.x || place.y() > SCREEN_SIZE.y);
}
