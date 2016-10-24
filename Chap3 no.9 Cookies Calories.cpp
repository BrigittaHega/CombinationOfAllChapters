#include <iostream>
using namespace std;

int main()
{
	//1 servings = 3 cookies.
	//3 cookies = 300 calories.
	//1 cookies = 100 clories.
	int cookie;
	
	cout<<"How much cookies do you eat?\n";
	cin>>cookie;
	
	float calorie=cookie*100;
	
	cout<<"The calories you get is "<<calorie;
	
	return 0;
}

//A bag of cookies holds 30 cookies. The calorie information on the bag claims that there
//are 10 “servings” in the bag and that a serving equals 300 calories. Write a program
//that asks the user to input how many cookies he or she actually ate and then reports
//how many total calories were consumed.
