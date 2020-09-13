#include "Weekly.h"
#include "Time.h"
#include "Date.h"
using namespace std;
#include <iostream>      
// Needed for cout
#include <cstdlib>       
// Needed for the exit function

Weekly::Weekly(string desc, Date d, Time s, Time e) {
	description = desc;
	date = d;
	start = s;
	end = e;
}

//WORK ON
bool Weekly::occurs_on( int month, int day, int type)
{

	if (getMonth() != month)
		return false;

	if (getDay() != day)
		return false;


}

void Weekly::print() {

	start.print();
	cout << "-";
	end.print();
	cout << "\t";
	cout << description;

}