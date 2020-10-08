// same as the foloowing (#pragma once)
#include <string>
#ifndef TIME_H
#define TIME_H


class time
{
public:
	time(int = 0, int = 0, int = 0);	//default constructor
	void setHour(int);				//set hour
	void setMinute(int);			//set minute
	void setSecond(int);			//set second
	void setTime(int, int, int); //set hour minute second
	unsigned int getHour() const;	//return hour
	unsigned int getMinute() const;	//return minute
	unsigned int getSecond() const;	//return second
	std::string toUniversalString() const;//24-hour
	std::string toStandardString() const;//12 hour

private:
	unsigned int hour{ 0 };//0-23
	unsigned int minute{ 0 };//0-59
	unsigned int second{ 0 };//0-59

};

#endif // !TIME_H


