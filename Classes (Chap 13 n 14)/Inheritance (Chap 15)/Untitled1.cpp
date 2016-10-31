#include <iostream>
using namespace std;

class Car
{
	private:
		int wheel;
		
	public:
		void drive()
		{
			cout<<"Base";
		}
};

class Toyota::public Car
{
	public:
		Toyota()
		{
			
		}
		void drive()
		{
			cout<<"derive";
		}
};

int main()
{
	Toyota *myCar = new Toyota;
	
	myCar -> drive();
	
	return 0;
}
