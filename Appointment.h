#pragma once


#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include "main.h"
#include "Date.h"
#include "Time.h"
#include <string>
using namespace std;

class Appointment
{

protected:
	string description;
	Time start;
	Time end;

	int month;
	int day;
	int year;

public:

	//constructors:
	//default constructor
	//constructor that accepts a desc (string), start and end time (Time class)

	Appointment(string description, Time start, Time end);

	Appointment();
	
	Appointment(int year, int month, int day);



	void read();

	void setDescription(string);
//	void setDate(Date);
	void setEndTime(Time end);
	void setStartTime(Time start);

	virtual void print() ;


	int getMonth() {
		return month;
	}

	int getDay() {
		return day;
	}

	int getYear() {
		return year;
	}

	string getDescription()
	{
		return description;
	}
//	Date getDate();
//		{return description};

	Time getStartTime()
	{
		return start;
	}
	
	Time getEndTime()
	{
		return end;
	}


	virtual bool occurs_on(int year, int month, int day);


};
#endif
