////////////////////////////////////////////////////////////////////////
// OOP Tutorial 7: Simple C++ OO program to simulate a simple Dice Game (single file)
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <ctime>	//for time used in random number routines
#include <iostream>	//for srand, cin >> & cout <<
#include <string>	//for string routines
using namespace std;

#include "RandomNumberGenerator.h"
#include "Score.h"
#include "Dice.h"
#include "Player.h"
#include "Game.h"

//---------------------------------------------------------------------------
//with two dices
int main()
{
	Player player;
	Game twoDiceGame(&player);
	cout << "\n________________________";
	cout << "\nGame starting...";
	twoDiceGame.displayData();
	cout << "\n________________________";
	twoDiceGame.run();
	cout << "\n________________________";
	cout << "\nGame ended...";
	twoDiceGame.displayData();
	cout << "\n________________________\n";

	system("pause");
	cout << "Some more changes";
	return 0;
} // Another commit
//Some other commits
//And some more