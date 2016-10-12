#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float classA = 15.00;
	float classB = 12.00;
	float classC = 9.00;
	int ticket1, ticket2, ticket3;
	
	cout << "How many tickets for each class is being sold?\n";
	cout << "For Class A: ";
	cin >> ticket1;
	cout << "\nFor Class B: ";
	cin >> ticket2;
	cout << "\nFor Class C: ";
	cin >> ticket3;
	
	float income1 = classA * ticket1;
	float income2 = classB * ticket2;
	float income3 = classC * ticket3;
	
	cout << setprecision(2) << fixed << showpoint << right;//showpoint = koma, right = kanan
 	cout << "The income for ClassA: $" << setw(6) << income1 << endl; //setw = spacing dari kiri
 	cout << "The income for ClassB: $" << setw(6) << income2 << endl;
 	cout << "The income for ClassC: $" << setw(6) << income3 << endl;
 	
 	return 0;
}
