#pragma once

#include "Entity.h"
#include <list>

using namespace Objects;
using namespace std;

class Game
{
private:
	list<Entity*> entities = list<Entity*>();

protected:
	void SetEntities(list<Entity*> value)
	{
		this->entities.clear();
		for (Entity* entity : value)
		{
			this->entities.push_back(entity);
		}
	}

public:
	__declspec(property (put = SetEntities, get = GetEntities)) list<Entity*> Entities;

	list<Entity*> GetEntities()
	{
		return this->entities;
	}

	void Update();
};
