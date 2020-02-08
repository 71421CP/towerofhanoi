#include "Pole.h"
#include <string>

using namespace std;

void Objects::Pole::Update()
{
	string symbol;

	for (Disk* disk : this->Disks)
	{
		if (disk == nullptr)
		{
			symbol = "  |  ";
		}
		else
		{
			disk->Render();
		}
	}
}

void Objects::Pole::SwitchDisk(Pole destination)
{
	destination.Disks.push_back(this->Disks.back());
	this->Disks.pop_back();
}
