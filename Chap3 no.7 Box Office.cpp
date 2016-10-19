#include <iostream>
using namespace std;

int main()
{
	string name;
	float adultNum;
	float childNum;
	float adult = 10.00;
	float child = 6.00;
	
	cout<< "Enter the movie name:\n";
	cin>>name;
	cout<< "Enter how many adult tickets were sold:\n";
	cin>> adultNum;
	cout<< "Enter how many child tickets were sold:\n";
	cin >> childNum;
	
	float grossBox = (adult * adultNum)+(child * childNum);
	float netBox = grossBox * 20 / 100;
	float amount = grossBox - netBox;
	
	cout <<"Gross Box Office Profit: "<< grossBox<<endl
	<<"Net Box Office Profit: "<< netBox<<endl
	<<"Amount Paid to Distributor: "<<amount;
	
	return 0;
}
