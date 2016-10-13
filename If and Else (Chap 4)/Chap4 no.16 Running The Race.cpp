#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string runner1, runner2, runner3;
	int second1, second2, second3;
	
	cin >> runner1; 
	cin>> runner2;
	cin>>runner3;
	
	cout << "Who is the winner between " << runner1 << ", " <<runner2 <<", and " <<runner3<<"?\n";
	
	cout << runner1<<"time:";
	cin >> second1;
	cout << endl << runner2<< "time:";
	cin>> second2;
	cout << endl << runner3<< "time:";
	cin>>second3;
//1st winner started here
	if (second1 < second2 && second1 <second3)
	{
		cout <<runner1 <<" is the 1stwinner \n";
	}
	else if (second2 < second1 && second2 <second3)
	{
		cout <<runner2 <<" is the 1stwinner \n";
	}
	else if (second3 < second2 && second3 <second1)
	{
		cout <<runner3 <<" is the 1stwinner \n";
	}

//2nd Winner started here
//I can use "||" to make this shorter
	if (second1 >second2 && second1 <second3)
	{
		cout <<runner1 <<" is the 2nd winner \n";
	}
	else if (second1 <second2 && second1 >second3)
	{
		cout <<runner1 <<" is the 2nd winner \n";
	}
	else if (second2 > second1 && second2 <second3)
	{
		cout <<runner2 <<" is the 2nd winner \n";
	}
	else if (second2 < second1 && second2 >second3)
	{
		cout <<runner2 <<" is the 2nd winner \n";
	}
	else if (second3 > second2 && second3 <second1)
	{
		cout <<runner3 <<" is the 2nd winner \n";
	}
	else if (second3 < second2 && second3 >second1)
	{
		cout <<runner3 <<" is the 2nd winner \n";
	}
//3rd winner started here
	if (second1 >second2 && second1 >second3)
	{
		cout <<runner1 <<" is the 3rd winner \n";
	}
	else if (second2 > second1 && second2 >second3)
	{
		cout <<runner2 <<" is the 3rd winner \n";
	}
	else if (second3 > second2 && second3 >second1)
	{
		cout <<runner3 <<" is the 3rd winner \n";
	}	
	if (second1 <= 0 || second2 <= 0 ||second3 <= 0)
	{
		cout <<"Negative numbers is unallowed";
	}
	return 0;
}
