#include <iostream>
#include <string>
using namespace std;

class Car
{
	private:
		int yearModel;
		string make;
		int speed;
	public:
		//Constructor
		Car(int);
		//Mutator
		void accessor();
		void brake();
		void accelerate();
		//Accessor
		int getYearModel();
		string getMake();
		int getSpeed();
		
};

Car::Car(int model)
{
	yearModel = model;
	make = "";
	speed = 0;
} 

void Car::accelerate()
{
	speed = speed + 5;
}

void Car::brake() 
{
	speed = speed - 5;
}

	int Car::getYearModel()
	{
		return (yearModel);
	}
	
	string Car::getMake()
	{
		return (make);
	}
	
	int Car::getSpeed()
	{
		return (speed);
	}

int main()
{
	int yearNum;
	
	cout<<"Enter the Year of Model:\n";
	cin>> yearNum;
	cout<<endl;
	
	Car car(yearNum);
	for (int index = 0; index < 5; index++)
	{
		car.accelerate();
		cout<<"Accelerate speed ="<<car.getSpeed()<<" m/s.\n";
	}
	
	for (int index = 0; index < 5; index++)
	{
		car.brake();
		cout<<"Brake speed ="<<car.getSpeed()<<" m/s.\n";
	}

	return 0;
}
/*Write a class namedCar that has the following member variables:

 • yearModel . An int that holds the car’s year model.
•	make . A string that holds the make of the car.
 • speed . An int that holds the car’s current speed.

In addition, the class should have the following constructor and other member functions.

•Constructor. The constructor should accept the car’s year model and make as arguments. These values should be assigned to the object’s yearModel andmake member
variables. The constructor should also assign 0 to thespeed member variables.

•Accessor. Appropriate accessor functions to get the values stored in an object’s
yearModel,make, andspeed member variables.

 • accelerate . The accelerate function should add 5 to thespeed member variable
each time it is called.

 • brake . Thebrake function should subtract 5 from thespeed member variable each
time it is called.

Demonstrate the class in a program that creates aCar object, and then calls the
accelerate function five times. After each call to theaccelerate function, get
the current speed of the car and display it. Then, call thebrake function five times.
After each call to thebrake function, get the current speed of the car and display it.*/
