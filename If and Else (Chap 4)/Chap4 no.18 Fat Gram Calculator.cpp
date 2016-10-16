#include <iostream>
using namespace std;

int main ()
{
	int fat, calorieTotal;
	
	cout<<"Please enter how many calories and fat in the food:\n";
	cin>>calorieTotal
	>>fat;
	
	float calorie = fat * 9;
	float caloriePercentage = calorie / calorieTotal;
	
	if (calorie<(calorieTotal*30/100))
	{
		cout << "The food is low in fat.\n";
	}
	else if (calorieTotal<0 || fat<0)
	{
		cout<<"The result become negative because it was smaller than zero. Please try again.\n";
	}
	
	cout<<"The percentage of calories from the fat is "<<caloriePercentage<<"%";
	return 0;
}
