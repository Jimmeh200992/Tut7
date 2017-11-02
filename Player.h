#pragma once
#include <iostream>	//for srand, cin >> & cout <<
#include <string>	//for string routines

using namespace std;

#include "Score.h"

class Player {
public:
	string getName() const;
	int getScoreAmount() const;
	void readInName();
	int readInNumberOfGoes() const;
	void updateScore(int);
private:
	string name_;
	Score score_;
};