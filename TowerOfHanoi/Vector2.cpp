#include "Vector2.h"

namespace Structs
{
	Vector2::Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2 operator+(Vector2 v1, Vector2 v2)
	{
		return Vector2(v1.x + v2.x, v1.y + v2.y);
	}

	Vector2 operator-(Vector2 v1, Vector2 v2)
	{
		return Vector2(v1.x - v2.x, v1.y - v2.y);
	}
}