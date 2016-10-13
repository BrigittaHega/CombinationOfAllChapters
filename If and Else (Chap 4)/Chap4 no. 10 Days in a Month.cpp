#include <iostream>
using namespace std;

int main ()
{
	int month;h
	int year;
	
	cout << "Enter a Month: ";
	cin >> month;
	
	cout << "Enter a Year: ";
	cin >> year;
	
	if (year/100 && year/400)
	{
		year = true;
	}
	else
	{
		year = false;
	}
	
	if (year = true)
	{
		cout << "It is a leap year";
	}
	else if (year = false)
	{
		cout << "It isn't a leap year";
	}

	return 0;
}
//yolo
