#pragma once

#ifndef MONTHLY_H
#define MONTHLY_H
#include <iostream>
#include "Appointment.h"
#include "Time.h"

class Monthly:public Appointment
{
private:
	int day; //member variable keeps track of day there is appt.

public:

	Monthly();

	Monthly(string description, int date, Time start, Time end);

	void read();

	 bool occurs_on(int year, int month, int day);

	 void print();
};
#endif

