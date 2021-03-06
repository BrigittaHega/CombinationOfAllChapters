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
	
	for (index = 1; index < MONTH; index++)
	{
		cout<<"For month "<<(index+1);
 		cout << "\nEnter the total rainfall for month"<<":\n";
 		cin >> weatherData[index].totalRainfall;
		cout << "\nEnter the high temperature for the weather:\n";
		cin >> weatherData[index].highTemperature;
		cout << "\nEnter the low temperature for the weather:\n";
		cin >> weatherData[index].lowTemperature;
		cout<<endl;
		cout << "The monthly average temperature is ";
		weatherData[index].averageTemperature = (weatherData[index].highTemperature/ weatherData[index].lowTemperature)/2;
		cout<<weatherData[index].averageTemperature;
		if(weatherData[index].lowTemperature < -100 && weatherData[index].highTemperature > 140)
		{
			cout<<"/nThe number is invalid";
		}
		cout << endl<<endl;
	}
	
	float annualRain, annualTemp;
	for (index = 1; index < MONTH; index++)
	{
 		annualRain += weatherData[index].totalRainfall;
		annualTemp += weatherData[index].averageTemperature;
	}
	cout << "\nTotal Rain: \n"<<annualRain<<endl
	<< "\nAverage annual rain: "<<annualRain/MONTH<<endl
	<<"\nAverage annual temp: "<<annualTemp/MONTH;
	
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
//Input Validation: Only accept temperatures within the range between �100 and +140
//degrees Fahrenheit.
