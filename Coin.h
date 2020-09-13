/*
#include <string>
#include <cstdlib>
#include<ctime>

using namespace std;

#ifndef Coin
#define Coin


class Coin
{
private:
	int sideUp;
	int h = 1;
	int t = 0;

public:
	Coin(int s, int he, int ta) {
		sideUp = s;
		h = he;
		t = ta;
	}

	int toss() {
		if ((rand() % 2) == 1) {
			
			cout << "heads";
			sideUp = 1;
			return (sideUp);
		}

		else {
			cout << "tails";
			sideUp = 0;
			return (sideUp);
		}
		
	}

	string getSideUp() {
		return sideUp;
	}

	Coin() {
		sideUp = 0;
		h=0
		t=0
	}
};

#endif
*/