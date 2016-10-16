#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string color1, color2;
	string red = "red", blue = "blue", yellow = "yellow";
	
	cout << "Enter two colour do you want to mix between red, blue, and yellow:"<<endl;
	cin >>color1
	>> color2;

	if (color1==red && color2==blue || color2==red && color1==blue)
	{
		cout <<"The color will be purple.";
	}
	else if (color1==red && color2==yellow || color2==red && color1==yellow)
	{
		cout <<"The colour will be orange.";
	}
	else if (color1==yellow && color2==blue || color2==yellow && color1==blue)
	{
		cout <<"The colour will be green.";
	}
	return 0;
}
