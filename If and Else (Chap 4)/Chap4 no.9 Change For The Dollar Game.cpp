//pennies, nickels, dimes, and quarters
#include <iostream>
using namespace std;

int main ()
{
	float pennies = 0.01;
	float nickels = 0.05;
	float dimes = 0.10;
	float quarters = 0.25;
	
	int penniesNum, nickelsNum, dimesNum, quartersNum;
	
	cout << "Enter how many pennies, nickels, dimes, and quarters do you want to input to make one dollar:\n";
	cin>>penniesNum
	>>nickelsNum
	>>dimesNum
	>>quartersNum;
	
	float penniesTotal = pennies * penniesNum;
	float nickelsTotal = nickels * nickelsNum;
	float dimesTotal = dimes * dimesNum;
	float quartersTotal = quarters * quartersNum;
	
	float dollar = penniesTotal + nickelsTotal + dimesTotal + quartersTotal;
	
	if (dollar == 1.00)
	{
		cout <<"Congratulation! You are the winner!";
	}
	else
	{
		cout <<"Too bad! You lose! Please try again!";
	}
	
	return 0;
}
