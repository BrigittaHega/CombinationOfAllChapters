#include <iostream>
using namespace std;

int main()
{
	string month1, month2, month3;
	float rain1, rain2, rain3;
	
	cout<<"Enter three month: \n";
	cin >>month1
	>>month2
	>>month3;

	cout<<"\nEnter the rainfall inches for each month: \n";
	cin >>rain1
	>>rain2
	>>rain3;
	
	int averageRainfall = rain1 + rain2 + rain3;
	
	cout << "\nThe average rainfall for "<<month1<<", "<<month2<<" and "<<month3<<" is "<<averageRainfall<<" inches.";
	
	return 0;
}
