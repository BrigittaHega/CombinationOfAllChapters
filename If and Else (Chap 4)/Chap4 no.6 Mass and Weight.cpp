#include <iostream>
using namespace std;

int main ()
{
	float mass;
	
	cin >> mass;  
	
	float weight = mass * 9.8;
	
	if (weight>=10 && weight<=1000)
	{
		cout <<"The object is optimal";
	}
	else if (weight>1000)
	{
		cout <<"The object is too heavy";
	}
	else if (weight<10)
	{
		cout <<"The object is too light";
	}
	return 0;
}
