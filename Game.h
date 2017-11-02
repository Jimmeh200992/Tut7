#pragma once

#include <iostream>	//for srand, cin >> & cout <<
#include <string>	//for string routines

using namespace std;

#include "Player.h"
#include "Dice.h"

class Game {
public:
	explicit Game(Player* pplayer);
	void displayData() const;
	void run();
private:
	Player* p_player_;
	Dice firstDice_, secondDice_;
	int numberOfGoes_;
	void rollDices();
};