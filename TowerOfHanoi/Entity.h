#pragma once

#include "Vector2.h"
#include "Color.h"
#include <list>
#include <string>

using namespace std;
using namespace Structs;
using namespace Enums;

namespace Objects
{
	class Entity
	{
	protected:
		list<string> lines = list<string>();
		Vector2 position;

		Entity(Vector2 position = Vector2()) : position(position)
		{};

	public:
		virtual void Update()
		{};
		virtual void Render();
	};
}