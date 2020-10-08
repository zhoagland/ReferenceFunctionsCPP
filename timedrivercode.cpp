//Driver.cpp
#include <iostream>
#include "time.h"	//must still include Time.h
using namespace std;

//a function that displays time in 24-h and 12-h format
void displayTime(const string& message, const time& time)
{
	cout << message << endl << "Universal time " << time.toUniversalString() << endl << "Standard time " << time.toStandardString() << endl << endl;
}


int main()
{
	time t1;		    //instantiate object t of class Time
	time t2{ 2 };	    //hour specified, minute and second defaulted
	time t3{ 21, 34 };  //hour and minute specified, second defaulted
	time t4{ 12, 25, 42 };	//all specified

	cout << "constructed with : "<< endl << endl;
	displayTime("t1: all arguments defaulted", t1);
	displayTime("t2: hour specified; minute and second defaulted", t2);
	displayTime("t3: hour and minute specified; second defaulted", t3);
	displayTime("t4: hour, minute, and second specified", t4);
	return 0;
}
