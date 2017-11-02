#pragma once

#include <ctime>
#include <iostream>

using namespace std;

class RandomNumberGenerator {
public:
	RandomNumberGenerator();
	int getRandomValue(int) const;
private:
	void seed() const;
};