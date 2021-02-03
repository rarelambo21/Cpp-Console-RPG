#include "Game.h"

Game::Game() {
    choice = 0;
    playing = true;
    activeCharacter = 0;
    fileName = "characters.txt";

}

Game::~Game() {

}

void Game::initGame(){
    createNewCharacter();
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
    cout << "6: New " << endl;
    cout << "7: Save " << endl;
    cout << "8: Load " << endl;

    cout << endl;

    cout << endl << "Choice: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
    case 0:
        playing = false;
        break;
    case 5:
        characters[activeCharacter].printStats();
        break;
    case 6:
        cin.ignore();
        createNewCharacter();
        saveCharacter();
        break;
    case 7:
        saveCharacter();
        break;
    case 8:
        loadCharacter();
        break;
    default:
        break;
    }
}

void Game::createNewCharacter(){
    string name;
    cout << "Enter a Character Name Please: " << endl;
    getline(cin, name);

    characters.push_back(Character());
    activeCharacter = characters.size() - 1;
    characters[activeCharacter].initialize(name);

}

void Game::saveCharacter(){
    ofstream outFile(fileName);

    if (outFile.is_open()){
        for (size_t i = 0; i < characters.size(); i++) {
            outFile << characters[i].getAsString() << "\n";
        }

        outFile.close();
    }
}

void Game::loadCharacter(){

}
