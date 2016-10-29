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
		void setDepartment(string);
		void setPosition(string);
		//Accessors
		string getName();
		int getID() const;
		string getDepartment();
		string getPosition();
};
	//Accessors
	string Employee::getName()
	{
		return name;
	}
	int Employee::getID() const
	{
		return idNumber;
	}
	string Employee::getDepartment()
	{
		return department;
	}
	string Employee::getPosition()
	{
		return position;
	}

// Constructor
Employee::Employee(string nameList = "", int id = 0, string departmentList = "", string positionList = "")
{
	name = nameList;
	idNumber = id;
	department = departmentList;
	position = positionList;
}
//Mutators
	void Employee::setName(string name)
	{
		name = name;
	};
	
	void Employee::setID(int id)
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
	const int DATA = 4;
	
	int idData;
	string nameData, departmentData, positionData;
	
	Employee data[DATA]={Employee(nameData, idData, departmentData, positionData)}; //But value = 0
	
	for (int index = 1; index < DATA; index++)
	{
		cout<<"Enter your name, id number, department, and position:\n";
		cin>>nameData
		>>idData
		>>departmentData
		>>positionData;
		cout<<endl;
	}
	
//	data[index].setName(nameData); 
//	data[index].setID(idData); 
//	data[index].setDepartment(departmentData); 
//	data[index.setPosition(positionData); 
	
	for (int index = 0; index < DATA; index++)
	{
		cout<<"What you get:\n";
		cout<<data[index].getName()<<endl
		<<data[index].getID() <<endl
		<<data[index].getDepartment()<<endl  
		<<data[index].getPosition();
	}
	
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
