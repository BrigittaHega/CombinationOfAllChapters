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
	/*	int getMonth() const;
		int getYear() const;
		int getDay() const;
		int getDisplayMonth() const;*/
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
	
//	int Date::getMonth() const
//	{
//		return month;
//	}
//	int Date::getDay() const
//	{
//		return day;
//	}
//	int Date::getYear() const
//	{
//		return year;
//	}
//	int Date::getDisplayMonth() const
//	{
//		return month;
//	}

int main()
{
	Date date;
	//int dayNum, monthNum, yearNum;
	
	date.setDay() ;
	date.setMonth(); 
	date.setYear();
	date.display();

	return 0;
	//const int MONTH = 12;
	//Date dateData[MONTH];
	
/*	cout<<"Day:";
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
/*	date.setDay(dayNum);
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

}
//Design a class calledDate. The class should store a date in three integers:month,day ,
//andyear. There should be member functions to print the date in the following forms:
// 12/25/2014
//December 25, 2014
//25 December 2014
