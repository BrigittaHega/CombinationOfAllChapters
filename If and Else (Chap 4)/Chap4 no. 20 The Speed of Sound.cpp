#include <iostream>
#include <string>
using namespace std;

int main ()
{
	float air = 1100;
	float water = 4900;
	float steel = 16400;
	float time1, time2, time3;
	int element;
	
	cout << "There is element option between air, water, and steel.\n";
	cout << "Which one you will pick? Enter between 1, 2, and 3.\n";
	cin >> element;

	float distance;
	switch(element)
	{
		case 1: 
		cout << "Enter the distance for sound in air(feet):\n";
		cin>>distance;
		time1 = distance/air;
		cout<<"The time for the speed is "<<time1<<"second.";
		break;
		case 2:
		cout << "Enter the distance for sound in water(feet):\n";
		cin>>distance;
		time2 = distance/water;
		cout<<"The time for the speed is "<<time2<<"second.";
		break;
		case 3:
		cout << "Enter the distance for sound in stell(feet):\n";
		cin>>distance;
		time3 = distance/steel;
		cout<<"The time for the speed is "<<time3<<"second.";
		break;
		default: cout << "That is an invalid choice.\n";
}
	
	return 0;
}
