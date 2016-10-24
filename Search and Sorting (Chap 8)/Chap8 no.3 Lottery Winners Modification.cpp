#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int [], int, int);
const int WINNER = 10;

int main()
{
// Array with employee IDs sorted in ascending order.
	int ticket[WINNER] = {13579, 26791, 26792, 33445, 55555,
						62483, 77777, 79422, 85647, 93121};
	int results; // To hold the search results
	int empID; // To hold an employee ID

// Get an employee ID to search for.
	cout << "Enter the employee ID you wish to search for: ";
	cin >> empID;

// Search for the ID.
	results = binarySearch(ticket, WINNER, empID);

// If results contains -1 the ID was not found.
	if (results == -1)
	cout << "That number does not exist in the array. \n";
	else
	{
// Otherwise results contains the subscript of
// the specified employee ID in the array.
		cout << "That ID is found at element " << results;
		cout << " in the array.\n";
	}
	return 0;
}

int binarySearch(const int array[], int size, int value)
{
	int first = 0, 
	last = size - 1, // Last array element
	middle, // Midpoint of search
	position = -1; // Position of search value
	bool found = false; // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2; // Calculate midpoint
		if (array[middle] == value) // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half
		last = middle - 1;
		else
		first = middle + 1; // If value is in upper half
	}
	return position;
}
