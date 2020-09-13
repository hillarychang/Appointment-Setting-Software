#include "Onetime.h"
#include "Time.h"
#include "Date.h"
#include <iostream>      
// Needed for cout
#include <cstdlib>       
// Needed for the exit function
using namespace std;

Onetime::Onetime(){

}



Onetime::Onetime(string desc, Date d, Time s, Time e)
{

	description = desc;
	what_day = d;
	start = s;
	end = e;

}

//WORK ON

bool Onetime:: occurs_on(int year, int month, int day) {

	if (getYear() != year)
		return false;

	if (getMonth() != month)
		return false;

	if (getDay() != day)
		return false;


}


void Onetime::print(){

	start.print(); 
	cout << "-";
	end.print(); 
	cout << "\t";
	cout<<description;

}