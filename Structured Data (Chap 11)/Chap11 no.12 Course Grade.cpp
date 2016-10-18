#include <iostream>
#include <string>
using namespace std;
struct Player
{
 //Movie title
	string name; //Director that make the movie
	int idnum; // Hourly pay rate
	int tests;
	int average;
};

//enum Name { TOM, JERRY, TEAM, YOL, BEN, SAN, JESS, LOLA, SASA, MIA, EGKA, DIAN };

//void displayMonth(Month);

int main()
{
	int num;
	Player player[num];
	int index;
	//Player playerData;
	
	Tests *testPtr = nullptr; // Define a Circle pointer
	tesrPtr = new Test; // Dynamically allocate a Circle structure
//	cirPtr->radius = 10; // Store a value in the radius member
//	cirPtr->diameter = 20; // Store a value in the diameter member
//	cirPtr->area = 314.159;
	
	cout<<"Enter how many students in this class:";
	cin >> num;
	
	for (index = 0; index <= num; index++)
	{
 		cout << "\nEnter your ID number: \n";
 		cin >> player[num].idnum;
		cout << "\nEnter the high temperature for the weather:\n";
		cin >> player[num].highTemperature;
		cout << "\nEnter the low temperature for the weather:\n";
		cin >> weatherData[monthText].lowTemperature;
		cout<<endl;
		cout << "The monthly average temperature is ";
		weatherData[monthText].averageTemperature = (weatherData[monthText].highTemperature/ weatherData[monthText].lowTemperature)/2;
		cout<<weatherData[monthText].averageTemperature;
		cout << endl<<endl;
	}

	return 0;
}

//TestsPointer to an array of test scores

//The program should keep a list of test scores for a group of students. It should ask the
//user how many test scores there are to be and how many students there are. It should
//then dynamically allocate an array of structures. Each structure’s 'Tests' member
//should point to a dynamically allocated array that will hold the test scores.

//After the arrays have been dynamically allocated, the program should ask for the ID
//number and all the test scores for each student. The average test score should be calculated and stored in theaverage member of each structure. 
//The course grade should be computed on the basis of the following grading scale:
