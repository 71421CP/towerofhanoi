#pragma once

#include "Entity.h"
#include "Game.h"
#include <list>

using namespace Objects;

class Renderer
{
private:
	list<Entity*> entities;

public:
	Renderer(Game* game) : entities(game->Entities) {};

	void Render();
};