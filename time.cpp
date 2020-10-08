//time.cpp
//defines the time member functions
#include "time.h" //include the class definition
#include <iomanip>
#include <stdexcept>	//for exceptions
#include <sstream>	//for string print
#include <string>
	

using namespace std;

time::time(int hour, int minute, int second)	//constructor
{
	setTime(hour, minute, second);	//call setTime
}
void time::setTime(int h, int m, int s)	//set time 
{
	setHour(h);	//call setHour to set the hour
	setMinute(m);	//call setMinute to set the minute
	setSecond(s);	//call setSecond to set the secons
}
void time::setHour(int h) {		//the setHour function
	if (h >= 0 && h < 24) {
		hour = h;
	}
	else {
		throw invalid_argument("hour must be 0 – 23");
	}
}
void time::setMinute(int m) {		 //the setMinute function
	if (m >= 0 && m < 60) {
		minute = m;
	}
	else {
		throw invalid_argument("minute must be 0 – 59");
	}
}
void time::setSecond(int s) {		//the setSecond function
	if (s >= 0 && s < 60) {
		second = s;
	}
	else {
		throw invalid_argument("second must be 0 – 59");
	}
}
//the get functions
unsigned int time::getHour() const { return hour; }
unsigned int time::getMinute() const { return minute; }
unsigned int time::getSecond() const { return second; }

string time::toUniversalString() const	//return 24-hour time format
{
	ostringstream output;
	output << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << " : " << setw(2) << getSecond();
	return output.str();	//return the formatted string
}
string time::toStandardString() const	//return 12-hour time format
{
	ostringstream output;
	output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << " : " << setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
	return output.str();	//return the formatted string
}


