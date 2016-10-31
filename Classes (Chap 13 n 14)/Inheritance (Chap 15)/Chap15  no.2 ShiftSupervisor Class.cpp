#include <iostream>
#include <string>
using namespace std;

class Employee
{
	private:
		string name;
		int number;
		string date;
		
	public:
		Employee(string, int, string);
		//Mutator
		void setName(string);
		void setNumber(int);
		void setDate(string);
		//Accessor
		string getName();
		int getNumber();
		string getDate();
};

Employee::Employee(string nameList, int num, string dateList)
{
	name = nameList;
	number = num;
	date = dateList;
}

	void Employee::setName(string nameList)
	{
		name = nameList;
	}
	void Employee::setNumber(int num)
	{
		number = num;
	}
	void Employee::setDate(string dateList)
	{
		date = dateList;
	}
	
	string Employee::getName()
	{
		return (name);
	}
	int Employee::getNumber()
	{
		return (number);
	}
	string Employee::getDate()
	{
		return (date);
	}


class ShiftSupervisor: public Employee
{
	private:
		double annualSalary;
		double annualBonus;
	public:
		ShiftSupervisor(string, int, string, double, double);
		//Mutator
		void setAnnualSalary(double);
		void setAnnualBonus(double);
		//Accessor
		double getAnnualSalary();
		double getAnnualBonus();
};

ShiftSupervisor::ShiftSupervisor(string nameList, int num, string dateList, double salary, double bonus) : Employee (nameList, num, dateList)
{
	annualSalary = salary;
	annualBonus = bonus;
}

	void ShiftSupervisor::setAnnualSalary(double salary)
	{
		annualSalary = salary;
	}
	void ShiftSupervisor::setAnnualBonus(double bonus)
	{
		annualBonus = bonus;
	}
	
	double ShiftSupervisor::getAnnualSalary()
	{
		return (annualSalary);
	}
	double ShiftSupervisor::getAnnualBonus()
	{
		return (annualBonus);
	}
	
int main()
{
	ShiftSupervisor data("Ega", 2001900, "21 Desember", 22.05, 1.75);
	
	cout<<"Name:"<<data.getName()<<"\nNumber: "<<data.getNumber()<<"\nDate: "<<data.getDate()<<endl<<
	"Annual Salary: "<<data.getAnnualSalary() <<"\nAnnual Bonus: "<<data.getAnnualBonus();
}
//	void total
//ShiftSupervisor Class

//In a particular factory a shift supervisor is a salaried employee who supervises a shift.
//In addition to a salary, the shift supervisor earns a yearly bonus when his or her shift
//meets production goals. 

//Design aShiftSupervisor class that is derived from the
//Employee class you created in Programming Challenge 1. 

//TheShiftSupervisor class
//should have a member variable that holds the annual salary and a member variable
//that holds the annual production bonus that a shift supervisor has earned. Write one
//or more constructors and the appropriate accessor and mutator functions for the class.
//Demonstrate the class by writing a program that uses aShiftSupervisor object.
