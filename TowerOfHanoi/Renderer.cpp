#pragma once

#include "Renderer.h"

void Renderer::Render()
{
	for(Entity* entity : this->entities)
	{
		entity->Render();
	}
}
