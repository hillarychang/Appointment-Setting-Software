#include "Time.h"
using namespace std;
#include <iostream>      
// Needed for cout
#include <cstdlib>       
// Needed for the exit function

Time::Time()
{
	hour = 0; 
	min = 0; 
	sec = 0;
}


Time::Time (int h, int m, int s)
{
	hour = h; 
	min = m; 
	sec = s;
}

void Time::print() {

	cout << hour << ":" << min << ":" << sec;
}