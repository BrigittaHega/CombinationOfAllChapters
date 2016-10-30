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
		Employee();
		Employee(string, int, string, string);
		Employee(string, int);
		//Mutators
		void setName(string);
		void setID(int);
		void setDepartment(string);
		void setPosition(string);
		void display();
		//Accessors
	/*	string getName();
		int getID() const;
		string getDepartment();
		string getPosition();*/
};
	//Accessors
/*	string Employee::getName()
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
*/
// Constructor
Employee::Employee() 
{
	name = "";
	idNumber = 0;
	department = "";
	position = "";
}

Employee::Employee(string nameList, int id, string departmentList, string positionList)
{
	name = nameList;
	idNumber = id;
	department = departmentList;
	position = positionList;
}

Employee::Employee(string nameList, int id)
   {
   		name = nameList;
		idNumber = id;
   		department ="";
   	  	position ="";
   }
//Mutators
	void Employee::setName(string nameList)
	{
		name = nameList;
	};
	
	void Employee::setID(int id)
	{
		idNumber = id;
	};
	
	void Employee::setDepartment(string departmentList)
	{
		department = departmentList;
	};
	
	void Employee::setPosition(string positionList)
	{
		position = positionList;
	};
	
	void Employee::display()
   {
      cout<< name<< "  "
	  << idNumber<<"  "
	  <<department<<"  "
	  << position<<endl;
   }
	
int main()
{
	Employee data1;
	data1.setName("Susan Myers");
	data1.setID(47899);
	data1.setDepartment("Accounting");
	data1.setPosition("Vice President");   
	
	Employee data2 ("Mark Jones",39119,"IT","Programmer");
	
	Employee data3("Joy Rogers",81774);
	data3.setDepartment("Manufacturing");
	data3.setPosition("Engineering");  
	
	cout<<"Name       ID Number  Department    Position \n";
	cout<<"____________________________________________\n";
	data1.display();
	cout<<"____________________________________________\n";
	data2.display();
	cout<<"____________________________________________\n";
	data3.display();
//	const int DATA = 4;
	
//	int idData;
//	string nameData, departmentData, positionData;
	
//	Employee data[DATA]={Employee(nameData, idData, departmentData, positionData)}; //But value = 0. Why???
	
/*	for (int index = 1; index < DATA; index++)
	{
		cout<<"Enter your name, id number, department, and position:\n";
		cin>>nameData
		>>idData
		>>departmentData
		>>positionData;
		cout<<endl;
	}
	*/
//	data[index].setName(nameData); 
//	data[index].setID(idData); 
//	data[index].setDepartment(departmentData); 
//	data[index.setPosition(positionData); 
	
/*	Almost Successful Array
	for (int index = 0; index < DATA; index++)
	{
		cout<<"What you get:\n";
		cout<<data[index].getName()<<endl
		<<data[index].getID() <<endl
		<<data[index].getDepartment()<<endl  
		<<data[index].getPosition();
	}*/
	
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
