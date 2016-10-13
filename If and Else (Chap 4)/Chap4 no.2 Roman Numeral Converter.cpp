#include <iostream>
using namespace std;

int main ()
{
	char choice;
	
	cout << "Enter between 1-10: ";
	cin >> choice;
 
	switch (choice)
	{
		case '1': cout << "I\n";
		break;
		case '2': cout << "II\n";
		break;
		case '3': cout << "III\n";
		break;
		case '4': cout << "IV\n";
		break;
		case '5': cout << "V\n";
		break;
		case '6': cout << "VI\n";
		break;
		case '7': cout << "VII\n";
		break;
		case '8': cout << "VIII\n";
		break;
		case '9': cout << "IX\n";
		break;
		case '10': cout << "X\n";
		break;
		default: cout << "You are unallowed to pick this numbers.\n";
	}
	return 0;
}
