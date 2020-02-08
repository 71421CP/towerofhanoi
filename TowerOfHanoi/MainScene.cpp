#include "MainScene.h"

MainScene::MainScene()
{
	Pole pole1 = Pole(Vector2(0, 0));
	Pole pole2 = Pole(Vector2(20, 0));
	Pole pole3 = Pole(Vector2(40, 0));

	Disk disk1 = Disk(1);
	Disk disk2 = Disk(3);
	Disk disk3 = Disk(5);

	pole1.Disks.push_back(&disk3);
	pole1.Disks.push_back(&disk2);
	pole1.Disks.push_back(&disk1);

	list<Entity*> entities = list<Entity*>();
	entities.push_back(&pole1);
	entities.push_back(&pole2);
	entities.push_back(&pole3);

	SetEntities(entities);
}
