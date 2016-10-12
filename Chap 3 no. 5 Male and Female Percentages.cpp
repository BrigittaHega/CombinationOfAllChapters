#include <iostream>
using namespace std;

int main()
{
	float male, female;
	int numStudents = 20;
	
	cout<<"Put in how many male students and female students in this school:\n";
	cin>>male
	>>female;
	
	cout<<endl;
	
	int both = male + female;
	if (both != numStudents)
	{
		cout << "There is only 20 students in this school. Please change the number of students.";
	}
	
	float malePercentage = (male/numStudents)*100;
	float femalePercentage = (female/numStudents)*100;
	
	cout << "The percentage of males in the class is "<< malePercentage<<"%"<<endl;
	cout << "While the percentage of females in the class is " << femalePercentage<<"%";
	
	
	return 0;
}
