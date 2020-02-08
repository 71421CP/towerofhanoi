#include "Entity.h"
#include <iostream>

namespace Objects
{
	void Entity::Render()
	{
		HANDLE stdOutHandle = GetStdHandle(STD_OUTPUT_HANDLE);

		COORD coordinates = {this->position.x, this->position.y};

		for(string line : this->lines)
		{
			SetConsoleCursorPosition(stdOutHandle, coordinates);
			std::cout << line;
			coordinates.Y++;
		}
	}
}