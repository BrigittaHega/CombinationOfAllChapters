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

enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

void displayMonth(Month);

int main()
{
	const int MONTH = 12;
	Weather weatherData[MONTH];
//	int index;
	Month monthText;
	
	for (monthText = JANUARY; monthText <= DECEMBER; monthText = static_cast<Month>(monthText + 1))
	{
		cout<<"For month ";
		displayMonth(monthText);
 		cout << "\nEnter the total rainfall for month"<<":\n";
 		cin >> weatherData[monthText].totalRainfall;
		cout << "\nEnter the high temperature for the weather:\n";
		cin >> weatherData[monthText].highTemperature;
		cout << "\nEnter the low temperature for the weather:\n";
		cin >> weatherData[monthText].lowTemperature;
		cout<<endl;
		cout << "The monthly average temperature is ";
		weatherData[monthText].averageTemperature = (weatherData[monthText].highTemperature/ weatherData[monthText].lowTemperature)/2;
		cout<<weatherData[monthText].averageTemperature;
		cout << endl<<endl;
	}
	
	float annualRain, annualTemp;
	for (monthText = JANUARY; monthText <= DECEMBER; monthText = static_cast<Month>(monthText + 1))
	{
 		annualRain += weatherData[monthText].totalRainfall;
		annualTemp += weatherData[monthText].averageTemperature;
	}
	cout << "\nTotal Rain: \n"<<annualRain<<endl
	<< "\nAverage annual rain: "<<annualRain/MONTH<<endl
	<<"\nAverage annual temp: "<<annualTemp/MONTH;
	
	return 0;
}

void displayMonth(Month b)
{
	switch(b)
	{
		case JANUARY : cout << "January";
		break;
		case FEBRUARY : cout << "February";
		break;
		case MARCH : cout << "March";
		break;
		case APRIL : cout << "April";
		break;
		case MAY : cout << "May";
		break;
		case JUNE : cout << "June";
		break;
		case JULY : cout << "July";
		break;
		case AUGUST : cout << "August";
		break;
		case SEPTEMBER : cout << "September";
		break;
		case OCTOBER : cout << "October";
		break;
		case NOVEMBER : cout << "November";
		break;
		case DECEMBER : cout << "December";
	}
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
