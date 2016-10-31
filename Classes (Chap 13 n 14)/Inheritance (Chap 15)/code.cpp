#include <iostream>
using namespace std;

//access modifier:
//1. public : everything can be accessed
//2. private: everything on private can only be accessed by the member of class itself

class Car
{
	protected:
		int wheel;
	public:
		Car()
		{
			cout<<"Test1"<<endl;
		}
		void drive()
		{
		}
//		{
//			cout<<"This is Class A"<<endl;
//////		}
};

class Toyota::public Car
{
	private:
		int temp;
	public:
		int temp2;
		Toyota() //
		{
			cout<<"Test2"<<endl;
		}
		void drive()
		{
			cout<<"This is Class B"<<endl;
		}
};

int main()
{
	int temp[3]={};
	
	try
	{
		temp[150] = 0;
		cout<<temp[150]<<endl;
	}
	catch(exception &e)
	{
		cout<<"Error coy";
	}
	
//	Car *myCar = new Toyota;
	
//	myCar -> drive();
	
	return 0;
}
