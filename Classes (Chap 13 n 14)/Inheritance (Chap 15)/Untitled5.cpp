#include <iostream>
#include <string>
using namespace std;

class Base
{
	public:
		void print()
		//int A()
		{
			cout<<"A";
		}
};

class Derived:public Base
{
	public:
		void print()
		//int A(&)
		{
			cout<<"B";
		}
};

int main()
{
	Base *obj = new Derived();
	obj-> print();
	
	cout<<endl;
	
	Derived *obj2 = new Derived();
	obj2->print();
	
	cout<<endl;
	
//	Derived *obj3 = new Base();
//	obj3->print();
	
	return 0;
}
