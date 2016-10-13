#include <iostream>
using namespace std;

int main ()
{
	int day;
	int month;
	int year;
	
	cin >> day;
	cin >> month; 
	cin >> year;
	cout << day <<"/"<< month <<"/"<< year;
	
	if (month * day == year)
	{
	cout << " is a magic date!";
	}
	else
	{
		cout << " isn't a magic date.";
	}
	
}
