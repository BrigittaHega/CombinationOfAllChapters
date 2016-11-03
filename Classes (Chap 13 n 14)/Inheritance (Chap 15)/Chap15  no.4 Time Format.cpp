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
		//Mutator
		void setTime(int, int);
		void setMilHours(int);
		void setMilSeconds(int);
		//Accessor
		int getMilHours();
		int getMilSeconds();
};

MilTime::MilTime(int hourNum, int minNum, int secNum, int milHour, int milSec) : Time( hourNum, minNum, secNum)
{
	if (milHour<0 || milHour>2359 || milSec<0 || milSec>59)
	{
		cout<<"INVALID";
	}
	else
	{
		milHours = milHour;
		milSeconds = milSec;
	}
	
}
	void setMilHours(int milHour)
	{
		milHours = milHour;
	}
	void setMilSeconds(int milSec)
	{
		milSeconds = milSec;
	}
	void setTime()
	{
		if (milHours>=1200)
		{
			hour = milHours/100-12;
			min = milHours - (milHours/100)*100;
			if (min >= 60)
			{
				min = min - 60;
				hour = hour+ 1;
			}
		}
		
		else if (milHours<1200)
		{
			hour = milHours/100;
			min = milHours - (milHours/100)*100;
			if (min >= 60)
			{
				min = min - 60;
				hour = hour+ 1;
			}
		}
		else if (milHours<100)
		{
			milHours = min;
		}
		
		sec = milSeconds;
	}
	
	int getMilHours()
	{
		return (milHours);
	}
	int getMilSeconds()
	{
		return (milSeconds);
	}
		
/*Time Format
Input Validation: TheMilTime class should not accept hours greater than 2359, or less
than 0. It should not accept seconds greater than 59 or less than 0.

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

getHour: Returns the hour in military format.
getStandHr: Returns the hour in standard format.

Demonstrate the class in a program that asks the user to enter the time in military format. The program should then display the time in both military and standard format.
*/
