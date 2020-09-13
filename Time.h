#pragma once

// Specification file for the Time class

#ifndef TIME_H
#define TIME_H

class Time
{
protected:   
	int hour;   
	int min;   
	int sec;

public:   // Default constructor   
	Time();
	
	// Constructor   
	Time(int h, int m, int s);

	void print();
	
	// Accessor functions  
	int getHour() const      
	{ return hour; }   
	
	int getMin() const     
	{ return min; }   
	
	int getSec() const     
	{ return sec; }

};
#endif
