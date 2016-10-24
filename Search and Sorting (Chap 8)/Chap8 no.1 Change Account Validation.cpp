#include <iostream>
using namespace std;

// Function prototype
int searchList(const int [], int, int);
const int SIZE = 18;

int main()
{
	int tests[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
					8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
					1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
	int results;

	int input;
	
	cout<<"Enter the valid number:";
	cin>>input;	
	
	results = searchList(tests, SIZE, input);

// If searchList returned -1, then 100 was not found.
	if (results == -1)
		cout << "The number is not valid\n";
	else
	{
		// Otherwise results contains the subscript of
		// the first 100 found in the array.
		cout << "The number is valid. ";
		cout << (results + 1) << endl;
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
