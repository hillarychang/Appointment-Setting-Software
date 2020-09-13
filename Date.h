#pragma once

//class that makes the date

// Specification file for the Date class
#ifndef DATE_H
#define DATE_H

class Date
{
private:   
int day;   
int month;   
int year;

public:   
	// Default constructor   
	Date();

	// Constructor    	
	Date(int d, int m, int y);

	// Accessors   
	int getDay() const
	{
		return day;
	}

	int getMonth() const
	{
		return month;
	}

	int getYear() const
	{
		return year;
	}
	

	//equals function
	//print function

	void print() const;

	bool equals(Date another) const;


};
#endif

/*
#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int month;
	int day;
	int year;

public:

	//constructors
	Date();

	Date(int month, int day, int year);


	int getYear() {
		return  year;
	}

	int getMonth() {
		return month;
	}

	int getDay() {
		return day;
	}


};
#endif
*/



/*
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
class Date
{

private:
	int month;
	int day;
	int year;

public:

	void secondway(int month, int day, int year) {
		string	month2;

		if (month < 1 || month>12) {
			cout << "Enter a valid month";
		}
		else {
			if (month == 1) {
				month2 = "January";
			}
			else if (month == 2) {
				month2 = "February";
			}
			else if (month == 3) {
				month2 = "March";
			}
			else if (month == 4) {
				month2 = "April";
			}
			else if (month == 5) {
				month2 = "May";
			}
			else if (month == 6) {
				month2 = "June";
			}
			else if (month == 7) {
				month2 = "July";
			}
			else if (month == 8) {
				month2 = "August";
			}
			else if (month == 9) {
				month2 = "September";
			}
			else if (month == 10) {
				month2 = "October";
			}
			else if (month == 11) {
				month2 = "November";
			}
			else if (month == 12) {
				month2 = "December";
			}
		}

		cout << month2 << " "<<day<<", " << year<<endl;
	}

	void firstway(int month, int day, int year) {
		cout << month <<"/"<< day<<"/" << year<<endl;
	}

	void thirdway(int month, int day, int year) {
		string	month2;

		if (month < 1 || month>12) {
			cout << "Enter a valid month";
		}
		else {

			if (month == 1) {
				month2 = "January";
			}
			else if (month == 2) {
				month2 = "February";
			}
			else if (month == 3) {
				month2 = "March";
			}
			else if (month == 4) {
				month2 = "April";
			}
			else if (month == 5) {
				month2 = "May";
			}
			else if (month == 6) {
				month2 = "June";
			}
			else if (month == 7) {
				month2 = "July";
			}
			else if (month == 8) {
				month2 = "August";
			}
			else if (month == 9) {
				month2 = "September";
			}
			else if (month == 10) {
				month2 = "October";
			}
			else if (month == 11) {
				month2 = "November";
			}
			else if (month == 12) {
				month2 = "December";
			}
		}

		cout << day << " " << month2 <<" "<< year<<endl;
	}

	void nextDay(int month, int day, int year) {
		day++;
		if (month == 1 && day == 31){
			month = 2;
			day = 1;
		}
		else if (month == 12 && day == 31) {
			month = 1;
			day = 1;
			year++;
		}
		
		else if ((month % 2 == 1) && (day == 31)) {
			day = 1;
			month++;

		}
		else if (month % 2 == 0 && day == 30) {
			day = 1;
			month++;
		}
		string month2;

		if (month == 1) {
			month2 = "January";
		}
		else if (month == 2) {
			month2 = "February";
		}
		else if (month == 3) {
			month2 = "March";
		}
		else if (month == 4) {
			month2 = "April";
		}
		else if (month == 5) {
			month2 = "May";
		}
		else if (month == 6) {
			month2 = "June";
		}
		else if (month == 7) {
			month2 = "July";
		}
		else if (month == 8) {
			month2 = "August";
		}
		else if (month == 9) {
			month2 = "September";
		}
		else if (month == 10) {
			month2 = "October";
		}
		else if (month == 11) {
			month2 = "November";
		}
		else if (month == 12) {
			month2 = "December";
		}

		int choice;
		cout << "firstway - enter 1, secondwat - enter 2, thirdway - enter 3\n";
		cin>> choice;
		if (choice == 1) {
			cout << month << "/" << day << "/" << year << endl;
		}
		else if (choice == 2) {
			cout << month2 << " " << day << ", " << year << endl;
		}
		else if (choice == 3){
			cout << day << " " << month2 << " " << year<<endl;
		}

	}

};



int main() {
	Date day1;
	day1.secondway(5, 2, 2020);

	day1.firstway(5, 2, 2020);

	day1.thirdway(5, 2, 2020);

	day1.nextDay(5, 2, 2020);

	return 0;
};
*/