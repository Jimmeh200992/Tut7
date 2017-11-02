#pragma once

using namespace std;

class Score {
public:
	Score();
	int getAmount() const;
	void updateAmount(int);
private:
	int amount_;
};