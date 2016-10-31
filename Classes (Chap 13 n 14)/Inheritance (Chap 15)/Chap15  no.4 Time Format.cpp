#include <iostream>
#include <string>
using namespace std;

class Time
{
	private:
		int hour;
		int min; 
		int sec;
	public:
		Time(int, int, int);
		void setHour(int);
		void setMin(int);
		void setSec(int);
		int getHour();
		int getMin(); 
		int getSec();
}

Time::Time(int hourNum, int minNum, int secNum)
{
	hour = hourNum;
	min = minNum;
	sec = secNum;
}

	void Time::setHour(int hourNum)
	{
		hour = hourNum;
	}
	void Time::setMin(int minNum)
	{
		min = minNum;
	}
	void Time::setSec(int secNum)
	{
		sec = secNum;
	}
	
	int getHour()
	{
		return (hour);
	}
	int getMin() 
	{
		return (min);
	}
	int getSec()
	{
		return (sec);
	}
	
class MilTime::public Time
{
	private:
		int milHours;
		int milSeconds;
	public:
		MilTime(int, int, int, int, int)
};

/*Time Format
In Program 15-20, the fileTime.h contains aTime class. Design a class called MilTime
that is derived from theTime class. TheMilTime class should convert time in military
(24-hour) format to the standard time format used by theTime class. The class should
have the following member variables:

milHours:Contains the hour in 24-hour format. For example, 1:00 pm would be
stored as 1300 hours, and 4:30 pm would be stored as 1630 hours.

milSeconds: Contains the seconds in standard format.

The class should have the following member functions:
Constructor:The constructor should accept arguments for the hour and seconds, in
military format. The time should then be converted to standard time
and stored in thehours,min, andsec variables of theTime class.
setTime:Accepts arguments to be stored in themilHours andmilSeconds
variables. The time should then be converted to standard time and
stored in thehours,min, andsec variables of theTime class.
964 Chapter 15 Inheritance, Polymorphism, and Virtual Functions
getHour: Returns the hour in military format.
getStandHr: Returns the hour in standard format.
Demonstrate the class in a program that asks the user to enter the time in military format. The program should then display the time in both military and standard format.
Input Validation: TheMilTime class should not accept hours greater than 2359, or less
than 0. It should not accept seconds greater than 59 or less than 0.*/
