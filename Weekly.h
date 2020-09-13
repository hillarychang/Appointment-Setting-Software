#pragma once

#ifndef WEEKLY_H
#define WEEKLY_H
#include "Appointment.h"
#include "Time.h"
#include "Date.h"

class Weekly:public Appointment
{
private:
	Date date;

public:
	Weekly();

	Weekly(string decription, Date day, Time start, Time end);

	bool occurs_on(int year, int month, int day);

	Weekly(string desc, int d, Time s, Time e);

	void print();
};



#endif