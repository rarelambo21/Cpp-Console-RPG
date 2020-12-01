#include "Game.h"

Game::Game() {
    choice = 0;
    playing = true;
}

Game::~Game() {

}

// Functions 
void Game::mainMenu() {
    cout << "Main Menu" << endl;
    cout << "0: Quit" << endl;
    cout << "1: Travel" << endl;
    cout << "2: Shop" << endl;
    cout << "3: Level" << endl;
    cout << "4: Rest" << endl;

    cin >> choice;

    switch (choice) {
    case 0:
        playing = false;
        break;
    default:
        break;
    }
}

void Game::endGame() {

}