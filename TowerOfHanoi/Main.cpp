#pragma once

#include "Game.h"
#include "MainScene.h"
#include "Renderer.h"
#include <iostream>

int main()
{
    Game game = MainScene();
    Renderer renderer = Renderer(&game);

    game.Update();
    renderer.Render();

    std::cout << "Tower of Hanoi\n";
    system("pause");
}
