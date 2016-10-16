#include <iostream>
using namespace std;

int main ()
{
	int length1, length2, width1, width2; 
	
	cout << "Enter the length for the two rectangles:"<<endl;
	cin >>length1
	>> length2;
	
	cout << "Enter the width for the two rectangles:"<<endl;
	cin >>width1
	>> width2;
	
	int rectangle1 = length1* width1;
	int rectangle2 = length2* width2;
	
	cout << "The result for the rectangles is "<< rectangle1<<" & "<<rectangle2<<" meters."<<endl;
	
	if (rectangle1>rectangle2)
	{
		cout <<"The first rectangle has the greater area than the second triangle.";
	}
	else if (rectangle2>rectangle1)
	{
		cout <<"The second rectangle has the greater area than the first triangle";
	}
	else if (rectangle1==rectangle2)
	{
		cout <<"Both rectangle has the same area.";
	}
	return 0;
}
