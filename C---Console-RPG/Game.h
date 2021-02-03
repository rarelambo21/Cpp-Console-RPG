#pragma once
#include "Character.h"
#include "Functions.h"
#include <ctime>
#include <vector>
#include <fstream>


using namespace std;

class Game
{
public:
    Game();
    virtual ~Game();

    // Operators 

    // Functions
    void initGame();
    void mainMenu();
    void createNewCharacter();
    void saveCharacter();
    void loadCharacter();

    // Accessors
    inline bool getPlaying() const { return this->playing; }

    // Modifiers  

private:
    // Variables
    int choice;
    bool playing;

    // Character Related
    int activeCharacter;
    vector<Character> characters;
    string fileName;
};