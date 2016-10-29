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
		//	color = "red";
		};
		Circle(double radius)
		{
			this->radius = radius;
			
			color = "red";
		}
		void setRadius (double radius)
		{
			this->radius = radius;
		}
};
