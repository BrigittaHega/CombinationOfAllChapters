#include <iostream>
using namespace std;

// Function prototype
int searchList(const int [], int, int);
const int WINNER = 10;

int main()
{
	int ticket[WINNER] = {13579, 26791, 26792, 33445, 55555,
						62483, 77777, 79422, 85647, 93121};
	int results;

	int input;
	
	cout<<"Enter the lottery winners number:";
	cin>>input;	
	
	results = searchList(ticket, WINNER, input);

	if (results == -1)
		cout << "The number is not valid\n";
	else
	{
		cout << "The number is valid. ";
//		cout << (results + 1) << endl;
	}
	return 0;
}

int searchList(const int list[], int numElems, int value)
{
	int index = 0; // Used as a subscript to search array
	int position = -1; // To record position of search value
	bool found = false; // Flag to indicate if the value was found

	while (index < numElems && !found)
	{
		if (list[index] == value) // If the value is found
		{
			found = true; // Set the flag
			position = index; // Record the value's subscript
		}
		index++; // Go to the next element
	}
	return position; // Return the position, or -1
}
