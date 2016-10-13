#include <iostream>
using namespace std;

int main ()
{
	int num1;
	int num2;
	
	cin >> num1; 
	cin >> num2;
	
	if (num1 > num2)
	{
		cout << num1 << " is larger than " << num2;
	}
	else if (num1 < num2)
	{
		cout << num1 << " is smaller than " << num2;
	}
	else if (num1 == num2)
	{
		cout << "They are same number";
	}
	return 0;
}
