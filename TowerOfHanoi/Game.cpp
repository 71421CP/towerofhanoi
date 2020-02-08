#include "Game.h"

void Game::Update()
{
	for (Entity* entity : this->Entities)
	{
		entity->Update();
	}
}
