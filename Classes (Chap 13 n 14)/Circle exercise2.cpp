#include <iostream>
#include <string>
using namespace std;

class Circle
{
	private:
		double radius; //= 1.0;
		string color; //= "red";
	public:
		Circle()
		{
			radius = 1.0;
			color = "red";
		};
		Circle(double r)
		{
			double getRadius();
			double getArea();
		}
		
	//  Circle (double r, string c)
	//	double getRadius();
	//	double getArea();
	
	string getColor(string newcolor) {
	color = newcolor;
	}
};

//Circle::Circle(double r)//std?
//{
//	radius = r;
//}

//3rd Constructor to construct a new instance of Circle with the given radius and color
//Circle (double r, string c)

//Getter for instance variable color
//string getColor() {....}
