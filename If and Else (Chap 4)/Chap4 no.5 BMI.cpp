#include <iostream>
using namespace std;

int main ()
{
	int height; 
	int weight;
	
	cin >> height;
	cin>> weight;
	
	float bodyMassIndex = weight * 703 / height * height;
	
	if (bodyMassIndex>=18.5 && bodyMassIndex <= 25)
	{
		cout <<"Your weight is optimal";
	}
	else if (bodyMassIndex<18.5)
	{
		cout <<"Your weight is underweight";
	}
	else if (bodyMassIndex > 25)
	{
		cout <<"Your weight is overweight";
	}
	return 0;
}
