#pragma once
#include "Character.h"
#include "Functions.h"
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

class Game
{
public:
    Game();
    virtual ~Game();

    // Operators 

    // Functions
    void mainMenu();
    void endGame();

    // Accessors
    inline bool getPlaying() const { return this->playing; }

    // Modifiers  

private:
    // Variables
    int choice;
    bool playing;
};