#include <iostream>
#include <string>
using namespace std;

// Rectangle class declaration.
class Employee
{
	private:
		string name;
		int idNumber;
		string department;
		string position;
		
	public:
		//Constructor
		Employee(string, int, string, string);
		//Mutators
		void setName(string);
		void setID(int);
		void setdepartment(string);
		void displayMonth(string);
		//Accessors
		int getName();
		int getID() const;
		int getDepartment();
		int getPosition();
};
	//Accessors
	int Employee::getName()
	{
		return name;
	}
	int Employee::getID() const
	{
		return idNumber;
	}
	int Employee::getDepartment()
	{
		return department;
	}
	int Employee::getPosition()
	{
		return position;
	}

// Constructor
Employee::Employee(string name = "", int id = 0, string department = "", string position = "")
{
	name = name;
	idNumber = id;
	department = department;
	position = position;
}
//Mutators
	void Employee::setName(string name)
	{
		name = name;
	};
	
	void Employee::setID(string id)
	{
		idNumber = id;
	};
	
	void Employee::setDepartment(string department)
	{
		department = department;
	};
	
	void Employee::setPosition(string position)
	{
		position = position;
	};
	
int main()
{
	
	int idData;
	string nameData, departmentData, positionData;
	
	cout<<"Enter your name, id number, department, and position:\n";
	cin>>nameData
	>>idData
	>>departmentData
	>>positionData;
	
	Employee data(nameData, idData, departmentData, positionData);
	
	cout<<data.getName()
	<<data.getID() 
	<<data.getDepartment()  
	<<data.getPosition();
	
	return 0;
}
/*
The class should have the following constructors:
Page 750
•A constructor that accepts the following values as arguments and assigns them to
the appropriate member variables: employee’s name, employee’s ID number, department, and position.

•A constructor that accepts the following values as arguments and assigns them to the
appropriate member variables: employee’s name and ID number. Thedepartment
andposition fields should be assigned an empty string (""  ).

//•A default constructor that assigns empty strings ("" ) to thename,department, and
//position member variables, and 0 to theidNumber member variable.

Write appropriate mutator functions that store values in these member variables and
accessor functions that return the values in these member variables. (Page 722)

Once you have
written the class, write a separate program that creates threeEmployee objects to hold
the following data.

 Name ID Number  Department  Position
Susan Meyers47899AccountingVice President
Mark Jones39119ITProgrammer
Joy Rogers81774ManufacturingEngineer

The program should store this data in the three objects and then display the data for
each employee on the screen.
*/
