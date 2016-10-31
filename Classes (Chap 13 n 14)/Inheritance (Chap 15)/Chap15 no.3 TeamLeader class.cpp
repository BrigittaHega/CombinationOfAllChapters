#include <iostream>
#include <string>
using namespace std;

class ProductionWorker
{
	private:
		int shift;
		double hourlyPayRate;
	public:
		ProductionWorker(int, double);
		//Mutator
		void setShift(int);
		void setHourlyPay(double);
		//Accessor
		string getShift();
		double getHourlyPay();
};

ProductionWorker::ProductionWorker(int shiftNum, double hourPay) 
{
	shift = shiftNum;
	hourlyPayRate = hourPay;
} 

	void ProductionWorker::setShift(int shiftNum)
	{
		shift = shiftNum;
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

class TeamLeader:public ProductionWorker
{
	private:
		double monthlyBonus;
		int trainingHours;
		int leaderHours;
	public:
		TeamLeader(int, double, double, int, int);
		//Accessor
		void setMonthlyBonus(double);
		void setTrainingHours(int);
		void setLeaderHour(int);
		double getMonthlyBonus();
		int getTrainingHours();
		int getLeaderHour();
};

TeamLeader::TeamLeader(int shiftNum, double hourPay, double bonus, int training, int leader) : ProductionWorker (shiftNum, hourPay)
{
	monthlyBonus = bonus;
	trainingHours = training;
	leaderHours = leader;
}

	void TeamLeader::setMonthlyBonus(double bonus)
	{
		monthlyBonus = bonus;
	}
	void TeamLeader::setTrainingHours(int training)
	{
		trainingHours = training;
	}
	void TeamLeader::setLeaderHour(int leader)
	{
		leaderHours = leader;
	}
	
	double TeamLeader::getMonthlyBonus()
	{
		return (monthlyBonus);
	}
	int TeamLeader::getTrainingHours()
	{
		return (trainingHours);
	}
	int TeamLeader::getLeaderHour()
	{
		return (leaderHours);
	}
	
int main()
{
	TeamLeader data(1, 22.05, 1.05, 5, 6);
	
	cout<<"Shift: "<<data.getShift() <<"\nHourly PayRate: "<<data.getHourlyPay()<<endl
	<<"Monthly Bonus: "<<data.getMonthlyBonus()<< "\nTraining Hours: "<<data.getTrainingHours() <<" hours\nHow long the Leader trains: "
	<<data.getLeaderHour()<<" hours" ;
	return 0;
}	

/*TeamLeader Class

TheTeamLeader class should have member variables for
the monthly bonus amount, the required number of training hours, and the number of
training hours that the team leader has attended.

In a particular factory, a team leader is an hourly paid production worker who leads
a small team. In addition to hourly pay, team leaders earn a fixed monthly bonus
Team leaders are required to attend a minimum number of hours of training per year.

Design aTeamLeader class that extends theProductionWorker class you designed in
Programming Challenge 1. 

 Write one or more constructors and
the appropriate accessor and mutator functions for the class. Demonstrate the class by
writing a program that uses aTeamLeader object.*/
