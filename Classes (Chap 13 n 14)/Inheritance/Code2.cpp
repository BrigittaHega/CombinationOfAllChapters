#include <iostream>
using namespace std;

//access modifier:
//1. public : everything can be accessed
//2. private: everything on private can only be accessed by the member of class itself

template <class Testing>
class Car
{
	public : 
	int test;
	void functon()
	{
		cout<<"Car 1"<<endl;
	}
};

template <class Testing>
class Car2
{
	public : 
	int test;
		void functon()
	{
		cout<<"Car 2"<<endl;
	}
};

template <class Testing> void func(Testing temp)
{
	temp.function();
}
//void temporary(Car temp)
//{
//	temp.test = 10;
//}

//void temporary(Car2 temp)
//{
//	temp.test = 10;
//}

int main()
{
	Car<class Testing> car;
	Car2<class Testing> car2;
	func(car);
	func(car2);
	return 0;
}
