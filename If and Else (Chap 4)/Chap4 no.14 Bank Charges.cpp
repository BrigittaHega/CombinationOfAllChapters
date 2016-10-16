#include <iostream>
using namespace std;

int main ()
{
	int balance, check;
	int charges = 10;
	int extraCharges = 15;
	
	cout<<"Enter the balance price($):\n";
	cin >> balance;
	cout<<"Enter how many checks do you have:\n";
	cin >> check;
	
	if(balance>=400)
	{
		if (check<20)
		{
			int serviceFees = charges*check*10;
			cout<<"The bank service fees for the month is "<<serviceFees;
		}
		else if(check>=10 && check<=39)
		{
			int serviceFees = charges*check*8;
			cout<<"The bank service fees for the month is "<<serviceFees;
		}
		else if(check>=40 && check<=59)
		{
			int serviceFees = charges*check*6;
			cout<<"The bank service fees for the month is "<<serviceFees;
		}
		else if(check>=60)
		{
			int serviceFees = charges*check*4;
			cout<<"The bank service fees for the month is "<<serviceFees;
		}
	}
	else if (balance<400)
	{
		if (check<20)
		{
			int serviceFees = (charges+extraCharges)*check*10;
			cout<<"The bank service fees for the month is "<<serviceFees;
		}
		else if(check>=10 && check<=39)
		{
			int serviceFees = (charges+extraCharges)*check*8;
			cout<<"The bank service fees for the month is "<<serviceFees;
		}
		else if(check>=40 && check<=59)
		{
			int serviceFees = (charges+extraCharges)*check*6;
			cout<<"The bank service fees for the month is "<<serviceFees;
		}
		else if(check>=60)
		{
			int serviceFees = (charges+extraCharges)*check*4;
			cout<<"The bank service fees for the month is "<<serviceFees;
		}
	}
	if (balance < 0)
	{
		cout << "\nUrgent Message : The accout is overdrawn.";
	}
	
	if (check<0)
	{
		cout<<"\nYou can't enter negative numbers on check.";
	}
	
	return 0;
}
