#include <iostream>
using namespace std;

int main ()
{
	int second1; 
	int second2;
	int second3;
	
	cin >> second1;
	cin>> second2;
	cin>>second3;
	
	float minute = second1/60;
	float hour = second2/3600;
	float day = second3/86400;
	
	if (second1 >= 60)
	{
		cout <<minute <<" minute \n";
	}
	if (second2>=3600)
	{
		cout <<hour<<" hour \n";
	}
	if (second3>=86400)
	{
		cout <<day<<" day";
	}
	return 0;
}
