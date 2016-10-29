#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int [], int, int);
const int SIZE = 18;

void showArray(const int [], int);
void sortArray(int [], int);

int main()
{
// Array with employee IDs sorted in ascending order.
	int account[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
						8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
						1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
	int results; // To hold the search results
	int empID; // To hold an employee ID
	
	cout<<"The sorted number is:";
	sortArray(account, SIZE);
	showArray(account, SIZE);
	
// Get an employee ID to search for.
	cout << "Enter the valid number: ";
	cin >> empID;

	

// Search for the ID.
	results = binarySearch(account, SIZE, empID);

// If results contains -1 the ID was not found.
	if (results == -1)
	cout << "The number is invalid. \n";
	else
	{
// Otherwise results contains the subscript of
// the specified employee ID in the array.
		cout << "The number is valid.\n";
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

void sortArray(int array[], int size)
{
	bool swap;
	int temp;

	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

void showArray(const int array[], int size)
{
	for (int count = 0; count < size; count++)
	cout << array[count] << ", ";
	cout << endl<<endl;
}
