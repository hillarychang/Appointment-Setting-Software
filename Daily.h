#pragma once

#ifndef DAILY_H
#define DAILY_H
#include "Appointment.h"
#include "Time.h"

class Daily:public Appointment
{
private: 

public:

	//constructors

	Daily();

	Daily(string description, Time start, Time end);

	virtual bool occurs_on(int year, int month, int day, int type);


	virtual void print();
};

#endif

