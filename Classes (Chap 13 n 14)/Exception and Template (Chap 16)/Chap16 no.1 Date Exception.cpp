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
		void setMonth(/*int*/);
		void setDay(/*int*/);
		void setYear(/*int*/);
		string DisplayMonth(/*int*/);
		void display();
};
	void Date::setMonth(/*int b*/)
	{
		cout<<"Month:";
		cin>>month;
		if (/*b*/month < 1 && /*b*/month > 12)
		//	month = b;
		//else
		{
			cout << "Invalid month. It has to be between 1 until 12.\n";
			setMonth();
		}
	};
	
	void Date::setDay(/*int c*/)
	{
		cout<<"Day:";
		cin>>day;
		if (/*c*/ day < 1 && day/*c*/> 31)
	//	day = c;
	//	else
		{
			cout << "Invalid day. It has to be between 1 until 31.\n";
			setDay();
		}
	};
	
	void Date::setYear(/*int d*/)
	{
		cout<<"Year:";
		cin>>year;
		if (/*d*/year < 1 && year/*d*/ >= 10000)
	//	year = d;
	//	else
		{
			cout << "Invalid year. It has to be between 1 until 9999.\n";
			setYear();
		}
	};
		
	string Date::DisplayMonth(/*int e*/)
	{
	//	month = e;
	switch(month)
		{//Use return instead cout
			case 1 : return ("January");
			break;
			case 2 : return ("February") ;
			break;
			case 3 : return ("March") ;
			break;
			case 4 : return ("April") ;
			break;
			case 5 : return ("May") ;
			break;
			case 6 : return ("June") ;
			break;
			case 7 : return ("July") ;
			break;
			case 8 : return ("August") ;
			break;
			case 9 : return ("September") ;
			break;
			case 10 : return ("October") ;
			break;
			case 11 : return ("November");
			break;
			case 12 : return ("December") ;
		};
	}
	
	void Date::display()
	{
		cout<<"Result:\n"
		<<month<<"/"<<day<<"/"<<year<<endl
		<<DisplayMonth()<<" "<<day<<" "<<year<<endl
		<<day<< " "<<DisplayMonth()<<" "<<year;
	}

int main()
{
	Date date;
	//int dayNum, monthNum, yearNum;
	
	date.setDay() ;
	date.setMonth(); 
	date.setYear();
	date.display();

	return 0;
}
/*
Date Exceptions
Modify theDate class you wrote for Programming Challenge 1 of Chapter 13. The
class should implement the following exception classes:
InvalidDay Throw when an invalid day (< 1 or > 31) is passed to the class.
InvalidMonth Throw when an invalid month (< 1 or > 12) is passed to the class.
Demonstrate the class in a driver program.*/
