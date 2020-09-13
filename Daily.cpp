#include "Daily.h"
using namespace std;
#include <iostream>      
// Needed for cout
#include <cstdlib>       
// Needed for the exit function

Daily::Daily(string desc, Time s, Time e)
{

	description = desc;
	start = s;
	end = e;

}


void Daily::print() {


		start.print();
		cout << "-";
		end.print();
		cout << "\t";
		cout << description;



}

bool Daily::occurs_on(int year, int month, int day, int type) {

	//Appointment::occurs_on();
	return true;
}