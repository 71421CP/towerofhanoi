#pragma once

#include "Entity.h"
#include "Disk.h"
#include <stack>

namespace Objects
{
	class Pole : public Entity
	{
	public:
		list<Disk*> Disks = list<Disk*>();

		Pole() : Entity() {};
		Pole(Vector2 position) : Entity(position) {};

		void Update() override;

		void SwitchDisk(Pole destination);

	};
}