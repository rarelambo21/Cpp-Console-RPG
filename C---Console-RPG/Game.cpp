#include "Game.h"

Game::Game() {
    choice = 0;
    playing = true;

}

Game::~Game() {

}

void Game::initGame(){
    string name;
    cout << "Enter a Character Name Please: " << endl;
    getline(cin, name);

    character.initialize(name);
}

// Functions 
void Game::mainMenu() {
    cout << "= Main Menu =" << endl;
    cout << "0: Quit" << endl;
    cout << "1: Travel" << endl;
    cout << "2: Shop" << endl;
    cout << "3: Level" << endl;
    cout << "4: Rest" << endl;
    cout << "5: Character Stats " << endl;
    cout << endl;

    cout << endl << "Choice: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
    case 0:
        playing = false;
        break;
    case 5:
        character.printStats();
        break;
    default:
        break;
    }
}
