#include <iostream>
using namespace std;

int main ()
{
	float weight, distance;
	float price1 = 1.10;
	float price2 = 2.20;
	float price3 = 3.70;
	float price4 = 4.80;
	
	cout << "Please enter the weight of the packages:\n";
	cin >> weight;
	cout << "Please enter the distance how far the packages shipped(per 500 miles):\n";
	cin >> distance;
	
	if (weight <= 2)
	{
		float charges = price1 * (distance/500);
		cout <<"The charges for this shipping is $"<<charges;
	}
	else if (weight > 2 && weight<= 6)
	{
		float charges = price2 * (distance/500);
		cout <<"The charges for this shipping is $"<<charges;
	}
	else if (weight > 6 && weight<= 10)
	{
		float charges = price3 * (distance/500);
		cout <<"The charges for this shipping is $"<<charges;
	}
	else if (weight > 10 && weight<= 20)
	{
		float charges = price4 * (distance/500);
		cout <<"The charges for this shipping is $"<<charges;
	}
	else if (weight > 20)
	{
		cout <<"We can't accept weight this much, 20 kg is our maximum weight";
	}
	else if (weight <= 0)
	{
		cout <<"Weight has to be at least 1 kg.";
	}
	
	if (distance < 10 || distance > 3000)
	{
		cout<<"\nThe distance pass the minimum or the maximum shipping distance.\nPlease enter more than 10 miles or less than 3000 miles.";
	}
	
	return 0;
}
