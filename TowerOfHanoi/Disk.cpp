#include "Disk.h"

string Objects::Disk::Render()
{
	int padding = (5 - this->size) / 2;
	string draw;

	draw.append(' ', padding);
	draw.append(this->symbol, this->size);
	draw.append(' ', padding);

	return draw;
}