#include <iostream>
using namespace std;

int main ()
{
	int purchase;
	
	cout << "Enter how many books do you purchase this week:\n";
	cin >> purchase;
	
	if (purchase == 0)
	{
		cout <<"The point you get is 0 points.";
	}
	else if (purchase == 1)
	{
		cout <<"The point you get is 5 points.";
	}
	else if (purchase == 2)
	{
		cout <<"The point you get is 15 points.";
	}
	else if (purchase == 3)
	{
		cout <<"The point you get is 30 points.";
	}
	else if (purchase >= 4)
	{
		cout <<"The point you get is 60 points.";
	}
	
	return 0;
}
