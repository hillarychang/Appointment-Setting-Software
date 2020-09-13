// Implementation file for the Monthly class.
#include "Monthly.h"
#include "Time.h"
#include <iostream>      
// Needed for cout
#include <cstdlib>       
// Needed for the exit function
using namespace std;

Monthly::Monthly() {

}

Monthly:: Monthly(string desc, int m, Time s, Time e) {
	description = desc;
	month = m;
	//date = d;
	start = s;
	end = e;
}


 bool Monthly:: occurs_on(int year, int month, int day) {
	
	if (getMonth() != month)
			return false;

}


void Monthly::read()

{

	Appointment::read();

	cout << "Enter day: ";

	int d;

	cin >> d;

	day = d;

}


void Monthly::print() {

	start.print();
	cout << "-";
	end.print();
	cout << "\t";
	cout << description;

}