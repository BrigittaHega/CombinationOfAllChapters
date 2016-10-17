//Division Name (such as East, West, North, or South)
//First-Quarter Sales
//Second-Quarter Sales
//Third-Quarter Sales
//Fourth-Quarter Sales
//Total Annual Sales
//Average Quarterly Sales

#include <iostream>
#include <string>
using namespace std;
struct Division
{
 //Movie title
	int firstQuarterSales; //Director that make the movie
	int secondQuarterSales; // Hourly pay rate
	int thirdQuarterSales;
	int fourthQuarterSales;
	float totalSales;
	float averageSales;
};

struct Random
{
	string division;
};
	
int main()
{
	Division east;
	Division west;
	Division south;
	Division north;
	
//	cout<<"Enter the division: \n";
//	cin>>division;

	cout<<"Enter the four quarters sales for East Division:\n";
	cin>>east.firstQuarterSales
	>>east.secondQuarterSales
	>>east.thirdQuarterSales
	>>east.fourthQuarterSales;
	
	east.totalSales = east.firstQuarterSales+east.secondQuarterSales+east.thirdQuarterSales+east.fourthQuarterSales;
	
	east.averageSales = east.totalSales / 4;
	
	cout<<"The total sales for East Division is "<<east.totalSales
	<<"\nThe average sales for East Division is "<<east.averageSales;
	
	if (east.firstQuarterSales < 0 || east.secondQuarterSales < 0 || east.thirdQuarterSales< 0 || east.fourthQuarterSales<0)
	{
		cout << "\nUnallowed to input negative numbers";
	}
	
	cout<<"\n\nEnter the four quarters sales for West Division:\n";
	cin>>west.firstQuarterSales
	>>west.secondQuarterSales
	>>west.thirdQuarterSales
	>>west.fourthQuarterSales;
	
	west.totalSales = west.firstQuarterSales+west.secondQuarterSales+west.thirdQuarterSales+west.fourthQuarterSales;
	
	west.averageSales = west.totalSales / 4;
	
	cout<<"The total sales for West Division is "<<west.totalSales
	<<"\nThe average sales for West Division is "<<west.averageSales;
	
	if (west.firstQuarterSales < 0 || west.secondQuarterSales < 0 || west.thirdQuarterSales< 0 || west.fourthQuarterSales<0)
	{
		cout << "\nUnallowed to input negative numbers";
	}
	
	cout<<"\n\nEnter the four quarters sales for South Division:\n";
	cin>>south.firstQuarterSales
	>>south.secondQuarterSales
	>>south.thirdQuarterSales
	>>south.fourthQuarterSales;
	
	south.totalSales = south.firstQuarterSales+south.secondQuarterSales+south.thirdQuarterSales+south.fourthQuarterSales;
	
	south.averageSales = south.totalSales / 4;
	
	cout<<"The total sales for South Division is "<<south.totalSales
	<<"\nThe average sales for South Division is "<<south.averageSales;
	
	if (south.firstQuarterSales < 0 || south.secondQuarterSales < 0 || south.thirdQuarterSales< 0 || south.fourthQuarterSales<0)
	{
		cout << "\nUnallowed to input negative numbers";
	}
	
	cout<<"\n\nEnter the four quarters sales for North Division:\n";
	cin>>north.firstQuarterSales
	>>north.secondQuarterSales
	>>north.thirdQuarterSales
	>>north.fourthQuarterSales;
	
	north.totalSales = north.firstQuarterSales+north.secondQuarterSales+north.thirdQuarterSales+north.fourthQuarterSales;
	
	north.averageSales = north.totalSales / 4;
	
	cout<<"The total sales for North Division is "<<north.totalSales
	<<"\nThe average sales for North Division is "<<north.averageSales;
	
	if (north.firstQuarterSales < 0 || north.secondQuarterSales < 0 || north.thirdQuarterSales< 0 || north.fourthQuarterSales<0)
	{
		cout << "\nUnallowed to input negative numbers";
	}
	
	return 0;
}
