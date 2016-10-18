#include <iostream>
#include <string>
using namespace std;
struct Player
{
 //Movie title
	playerName; //Director that make the movie
	int playerNumber; // Hourly pay rate
	int pointScored;
};

//enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

//void displayMonth(Month);

int main()
{
	const int PLAYER = 12;
	Player playerData[PLAYER];
	int index;
//	Month monthText;
	
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

