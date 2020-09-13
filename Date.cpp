#include "Date.h"
using namespace std;
#include <iostream>      
// Needed for cout
#include <cstdlib>       
// Needed for the exit function

Date::Date() {
	day = 7;
	month = 15;
	year = 2020;
}
 
Date::Date(int d, int m, int y)
{
	day = d; 
	month = m; 
	year = y;
}



//print function
void Date::print() const {
	cout << year << "/" << month << "/" << day;
}

//equals function
bool Date::equals(Date another) const {
	return (day == another.day && month == another.month
		&& year == another.year);

}


/*
//WORK ON
virtual bool occurs_on(int year, int month, int day) {

}*/

