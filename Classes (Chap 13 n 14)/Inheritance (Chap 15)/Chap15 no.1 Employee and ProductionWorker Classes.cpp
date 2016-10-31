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



class ProductionWorker:public Employee
{
	private:
		int shift;
		double hourlyPayRate;
	public:
		ProductionWorker(string, int, string, int, double);
		//Mutator
		void setShift(int);
		void setHourlyPay(double);
		//Accessor
		string getShift();
		double getHourlyPay();
};

ProductionWorker::ProductionWorker(string nameList, int num, string dateList, int shiftNum, double hourPay) : Employee (nameList, num, dateList)
{
	shift = shiftNum;
	hourlyPayRate = hourPay;
} 

	void ProductionWorker::setShift(int shiftNum)
	{
	//	cout<<"Enter\n";
	//	cin>>shift;
	//	
	//	if (shiftNum<1||shiftNum>2)
	//	{
	//		cout<<"InvalidNumber. Must between Number 1 and 2";
	//		setShift(shiftNum);
	//	}
	///	else
	//	{
			shift = shiftNum;
	//	}
		
	//	if (shiftNum==1)
	//	{
			
	//		cout<<"Day Shift\n";
	//	}
	//	else if(shiftNum==2)
	//	{
	//		cout<<"Night Shift";
	//	}
		
		
	}
	void ProductionWorker::setHourlyPay(double hourPay)
	{
		hourlyPayRate = hourPay;
	}
	
	string ProductionWorker::getShift()
	{
		string shiftRole[]={"Day Shift", "Night Shift"};
		return (shiftRole[shift-1]);
	}
	double ProductionWorker::getHourlyPay()
	{
		return (hourlyPayRate);
	}
		

int main()
{
	ProductionWorker data("Ega", 2001900, "21 Desember", 1, 22.05);
	
	cout<<"Name:"<<data.getName()<<"\nNumber: "<<data.getNumber()<<"\nDate: "<<data.getDate()<<endl<<
	"Shift: "<<data.getShift() <<"\nHourly PayRate: "<<data.getHourlyPay();
	
	/*ProductionWorker data2(1, 22.05);
	
	cout<<"Shift: "<<data2.getShift() <<"\nHourly Payrate: "<<data2.getHourlyPay() ;*/
	
	return 0;
}

/*

Next, write a class named ProductionWorker that is derived from the Employee class.
The ProductionWorker class should have member variables to hold the following
information:
•Shift (an integer)
•Hourly pay rate (adouble )

The workday is divided into two shifts: day and night. The shift variable will hold an
integer value representing the shift that the employee works. The day shift is shift 1, and
the night shift is shift 2. Write one or more constructors and the appropriate accessor
and mutator functions for the class.

Demonstrate the classes by writing a program that uses aProductionWorker object.

Employee andProductionWorker Classes
Design a class namedEmployee. The class should keep the following information in
•Employee name
•Employee number
•Hire date*/
