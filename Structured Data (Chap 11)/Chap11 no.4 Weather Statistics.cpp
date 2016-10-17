#include <iostream>
#include <string>
using namespace std;
struct Weather
{
 //Movie title
	int totalRainfall; //Director that make the movie
	int highTemperature; // Hourly pay rate
	int lowTemperature;
	int averageTemperature;
};

int main()
{
	const int MONTH = 12;
	Weather weatherData[MONTH];
	int index;
	
	for (index = 0; index < MONTH; index++)
	{
		cout<<"For month "<<(index+1);
 		cout << "\nEnter the total rainfall for month"<<":\n";
 		cin >> weatherData[index].totalRainfall;
		cout << "\nEnter the high temperature for the weather:\n";
		cin >> weatherData[index].highTemperature;
		cout << "\nEnter the low temperature for the weather:\n";
		cin >> weatherData[index].lowTemperature;
		
		cout << "The monthly average temperature is ";
		weatherData[index].lowTemperature = (weatherData[index].highTemperature/ weatherData[index].lowTemperature)/2;
		cout << endl;
	}
	
	for (index = 0; index < MONTH; index++)
	{
		float annualYear;
 		cout << "\nThe average rainfall for"<<(index+1)<<"is \n";
 		;
	
		cout << endl;
	}
	
	
	
	
	return 0;
}

//Total Rainfall
//High Temperature
//Low Temperature
//Average Temperature
//The program should have an array of 12 structures to hold weather data for an
//entire year. When the program runs, it should ask the user to enter data for each
//month. (The average temperature should be calculated.) Once the data are entered
///for all the months, the program should calculate and display the average monthly
///rainfall, the total rainfall for the year, the highest and lowest temperatures for the
//year (and the months they occurred in), and the average of all the monthly average
//temperatures.
//Input Validation: Only accept temperatures within the range between –100 and +140
//degrees Fahrenheit.
