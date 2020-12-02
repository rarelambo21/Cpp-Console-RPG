#pragma once
#include "Character.h"
#include "Functions.h"
#include <ctime>


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

    // Accessors
    inline bool getPlaying() const { return this->playing; }

    // Modifiers  

private:
    // Variables
    int choice;
    bool playing;

    // Character Related
    Character character;
};