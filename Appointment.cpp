#include "Appointment.h"
#include "main.h"
using namespace std;
#include <iostream>      
// Needed for cout
#include <cstdlib>       
// Needed for the exit function


Appointment::Appointment() {

}

Appointment::Appointment(string desc, Time s, Time e)
{
	
		//date =
		description = desc;
		start = s;
		end = e;
	
}

Appointment::Appointment(int yr, int m, int d)
{
	year = yr;
	month = m;
	day = d;

}

void Appointment::setDescription(string desc)
{ 
	description = desc;
}

void Appointment::setEndTime(Time e) {
	end = e;
}


void Appointment::setStartTime(Time s) {
	start = s;
}

void Appointment::print() {

}

//WORK ON
bool Appointment::occurs_on(int m2, int d2, int type) {
	//type 0: check month (monthly)
	//type 1: check month, year, day (onetime)
	//type 2: check month and day (weekly)
	//type 3: return true (daily)

	if (type == 0 && m2 == month)
		return true;

	if (type == 1 && m2 == month && d2==day)
		return true;

	if (type == 2 && m2 == month && d2==day)
		return true;

	if (type == 3)
		return true;

	//return true
}
void Appointment::read()

{

	int starth;

	int startm;

	int endh;

	int endm;

	cout << "Enter start_hours start_mins end_hours end_mins descript:"

		<< endl;

	cin >> starth >> startm >> endh >> endm;

	getline(cin, description);

	start = Time(starth, startm, 0);

	end = Time(endh, endm, 0);

}