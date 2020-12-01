#pragma once
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
#include "Functions.h"

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