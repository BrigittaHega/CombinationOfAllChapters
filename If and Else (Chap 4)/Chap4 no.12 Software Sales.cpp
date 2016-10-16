//pennies, nickels, dimes, and quarters
#include <iostream>
using namespace std;

int main ()
{
	int quantity;
	int itemPrice = 99;
	
	cout << "Enter how many items do you want to buy:\n";
	cin >> quantity;
	
	if (quantity >= 10 && quantity <= 19)
	{
		int percentage1 = quantity * itemPrice * 20 / 100;
		cout <<"The total cost is $"<< percentage1;
	}
	else if (quantity >= 20 && quantity <= 49)
	{
		int percentage2 = quantity * itemPrice * 30 / 100;
		cout <<"The total cost is $"<< percentage2;
	}
	else if (quantity >= 50 && quantity <= 99)
	{
		int percentage3 = quantity * itemPrice * 40 / 100;
		cout <<"The total cost is $"<< percentage3;
	}
	else if (quantity >= 100)
	{
		int percentage4 = quantity * itemPrice * 50 / 100;
		cout <<"The total cost is $"<< percentage4;
	}
	else if (quantity < 0)
	{
		cout <<"You can't enter number smaller than zero. Please try again'";
	}
	else
	{
		int percentage5 = quantity * itemPrice;
		cout <<"The total cost is $"<< percentage5;
	}
	
	return 0;
}
