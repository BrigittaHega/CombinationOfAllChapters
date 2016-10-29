#include <iostream>
#include <string>
//#include <time.h>
using namespace std;

// Date class declaration.
class Date
{
	private:
		int month;
		int day;
		int year;
		//enum Month = { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};
	public:
		//Member function declaration
		void setMonth(int);
		void setDay(int);
		void setYear(int);
		void displayMonth(int);
		int getMonth() const;
		int getYear() const;
		int getDay() const;
		int getDisplayMonth() const;
};

	int Date::getMonth() const
	{
		return month;
	}
	int Date::getDay() const
	{
		return day;
	}
	int Date::getYear() const
	{
		return year;
	}
	int Date::getDisplayMonth() const
	{
		return month;
	}
	void Date::setMonth(int b)
	{
		if (b >= 1 && b <= 12)
			month = b;
		else
		{
			cout << "Invalid month\n";
		}
	};
	
	void Date::setDay(int c)
	{
		if (c >= 1 && c <= 31)
		day = c;
		else
		{
			cout << "Invalid day\n";
		}
	};
	
	void Date::setYear(int d)
	{
		if (d >= 1 && d <= 3000)
		year = d;
		else
		{
			cout << "Invalid year\n";
		}
	};
		
	void Date::displayMonth(int e)
	{
		month = e;
	switch(e)
		{
			case 1 : cout << "January";
			break;
			case 2 : cout << "February";
			break;
			case 3 : cout << "March";
			break;
			case 4 : cout << "April";
			break;
			case 5 : cout << "May";
			break;
			case 6 : cout << "June";
			break;
			case 7 : cout << "July";
			break;
			case 8 : cout << "August";
			break;
			case 9 : cout << "September";
			break;
			case 10 : cout << "October";
			break;
			case 11 : cout << "November";
			break;
			case 12 : cout << "December";
		};
	}
	
//	void Date::


int main()
{
	Date date;
	int dayNum, monthNum, yearNum;
	
	//const int MONTH = 12;
	//Date dateData[MONTH];
	
	cout<<"Day:";
	cin>>dayNum;
	cout<<"Month: ";
	cin>>monthNum;
	cout<<"Year: ";
	cin>>yearNum;
	cout<<endl<<endl;
	
/*	for (monthText=JANUARY; monthText <= DECEMBER; monthText = static_cast<Month>(monthText + 1))
	{
		monthNum = monthText;
	}
	*/
	date.setDay(dayNum);
	date.setMonth(monthNum); 
	date.setYear(yearNum);
	date.displayMonth(monthNum);
	
	cout<<date.getMonth()<<"/"<<date.getDay()<<"/"<<date.getYear()<<endl;
	cout<<date.getDisplayMonth()<<"/"<<date.getDay()<<"/"<<date.getYear()<<endl;
	cout<<date.getDisplayMonth();
/*	char* str = "20161127";
	tm tml;
	sscanf(str,"%4d%2d%2d", &tml.tm_year, &tml.tm_mon , &tml.tm_mday );
	cout<<tml.tm_year <<tml.tm_mon <<tml.tm_mday ;

/*	struct tm tm;
	time_t rawTime;
	time(&rawTime);
	tm = *localtime (&rawtime);
	
	tm.tm_year = yearNum;
	tm.tm_month = monthNum;
	tm.tm_mday = dayNum;
	mktime(&tm);
	
	cout<<tm;
	*/
	return 0;
}
//Design a class calledDate. The class should store a date in three integers:month,day ,
//andyear. There should be member functions to print the date in the following forms:
// 12/25/2014
//December 25, 2014
//25 December 2014
