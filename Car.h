/*

#include <string>
using namespace std;


#ifndef Car_h
#define Car_h


class Car
{
private:
	int yearModel;
	string make;
	int speed;

public:
	Car(int yrM, string m, int s) {
		yearModel = yrM;
		make = m;
		speed = s;
	}

	Car(int yrM, string m) {
		yearModel = yrM;
		make = m;
		speed = 0;
	}

	void setYear(int yrM) {
		yearModel = yrM;
	}
	
	void setMake(string m) {
		make=m;
	}
	
	void setSpeed(int s) {
		speed = s;
	}

	int getYear() {
		return yearModel;
	}

	string getMake() {
		return make;
	}

	int getSpeed() {
		return speed;
	}

	int accelerate() {
		speed += 5;
		return speed;
	}
	
	int brake() {
		speed -= 5;
		return speed;
	}
};


#endif 
*/