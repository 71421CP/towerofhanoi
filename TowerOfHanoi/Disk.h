#pragma once

#include <string>

using namespace std;

namespace Objects
{
	class Disk
	{
	private:
		const char symbol = '#';

		unsigned int size;

	public:
		Disk(unsigned int size) : size(size)
		{};

		string Render();
	};
}
