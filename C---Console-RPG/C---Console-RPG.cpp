// C---Console-RPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Game.h"

int main() {
    srand(time(NULL));

    Game game;
    game.initGame();

    Inventory inv;

    inv.addItem(Item());
    inv.addItem(Item());
    inv.addItem(Item());
    inv.addItem(Item());
    inv.addItem(Item());


    while (game.getPlaying()) {
        game.mainMenu();
    }

    return 0;
}