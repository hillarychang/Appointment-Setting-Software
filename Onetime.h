#pragma once

#ifndef ONETIME_H
#define ONETIME_H
#include "Appointment.h"
#include "Date.h"
#include "Time.h"

class Onetime:public Appointment
{
private:
	Date what_day;

public:
	Onetime();

	Onetime(string description, Date day, Time start, Time end);

	//occurs_on(int year, int month, int day);

	void print();

	bool occurs_on(int year, int month, int day);
	// input matches with the date object member variable stored in the vector


};


#endif
