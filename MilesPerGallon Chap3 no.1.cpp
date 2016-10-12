#include <iostream>
using namespace std;

int main()
{
	int fullTank;
	int milesFullTank;
	
	cout << "The number of gallon inside the car is ";
	cin >> fullTank;
	cout << "\nThe number of miles on full tank is ";
	cin >> milesFullTank;
	cout << "miles.\n\n";
	
	float milesPerGallon = milesFullTank/fullTank;
	
	cout << "The miles we can get through per gallon is " << milesPerGallon <<" miles.";
}
