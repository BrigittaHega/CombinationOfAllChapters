#include <iostream>
#include <string>
using namespace std;

struct MonthlyBudget
{
	float housing; 
	float utilities;
	float householdExpense;
	float transportation;
	float food; 
	float medical;
	float insurance;
	float entertainment;
	float clothing; 
	float miscellanous;
};

void amount(MonthlyBudget&);
void report(MonthlyBudget, MonthlyBudget);

int main()
{
	MonthlyBudget budget = {500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.00, 150.00, 75.00, 50.00};
	MonthlyBudget spend;
	
	amount(spend);
	report (budget, spend);
	
	return 0;
}

void amount(MonthlyBudget &spent)
{
	cout<<"Enter how much amount spent for each categories in a month:\n";
	cin>>spent.housing
	>>spent.utilities
	>>spent.householdExpense 
	>>spent.transportation 
	>>spent.food
	>>spent.medical 
	>>spent.insurance
	>>spent.entertainment 
	>>spent.clothing 
	>>spent.miscellanous; 
}

void report(MonthlyBudget a, MonthlyBudget spent)
{
	int totalMonthBudget = a.housing+a.utilities+a.householdExpense+a.transportation+a.food+a.medical+a.insurance+a.entertainment+a.clothing+a.miscellanous;
	int totalAmount = spent.housing+spent.utilities+spent.householdExpense+spent.transportation+spent.food+spent.medical+spent.insurance+spent.entertainment+spent.clothing+spent.miscellanous;
	
	if (spent.housing > a.housing)
	{
		cout<<"It's over the housing budget.\n";
	}
	else if (spent.housing < a.housing)
	{
		cout<<"It's under the housing budget.\n";
	}
	else if (spent.housing == a.housing)
	{
		cout<<"It's has the same amount.\n";
	}
	
	if (spent.utilities > a.utilities)
	{
		cout<<"It's over the utilities budget.\n";
	}
	else if (spent.utilities < a.utilities)
	{
		cout<<"It's under the utilities budget.\n";
	}
	else if (spent.utilities == a.utilities)
	{
		cout<<"It's has the same amount.\n";
	}
	
	if (spent.householdExpense > a.householdExpense)
	{
		cout<<"It's over the household expense budget.\n";
	}
	else if (spent.householdExpense < a.householdExpense)
	{
		cout<<"It's under the household expense budget.\n";
	}
	else if (spent.householdExpense == a.householdExpense)
	{
		cout<<"It's has the same amount.\n";
	}
	
	if (spent.transportation > a.transportation)
	{
		cout<<"It's over the transportation budget.\n";
	}
	else if (spent.transportation < a.transportation)
	{
		cout<<"It's under the transportation budget.\n";
	}
	else if (spent.transportation == a.transportation)
	{
		cout<<"It's has the same amount.\n";
	}
	
	if (spent.food > a.food)
	{
		cout<<"It's over the food budget.\n";
	}
	else if (spent.food < a.food)
	{
		cout<<"It's under the food budget.\n";
	}
	else if (spent.food == a.food)
	{
		cout<<"It's has the same amount.\n";
	}
	
	if (spent.medical > a.medical)
	{
		cout<<"It's over the medical budget.\n";
	}
	else if (spent.medical < a.medical)
	{
		cout<<"It's under the medical budget.\n";
	}
	else if (spent.medical == a.medical)
	{
		cout<<"It's has the same amount.\n";
	}
	
	if (spent.insurance > a.insurance)
	{
		cout<<"It's over the insurance budget.\n";
	}
	else if (spent.insurance < a.insurance)
	{
		cout<<"It's under the insurance budget.\n";
	}
	else if (spent.insurance == a.insurance)
	{
		cout<<"It's has the same amount.\n";
	}
	
	if (spent.entertainment > a.entertainment)
	{
		cout<<"It's over the entertainment budget.\n";
	}
	else if (spent.entertainment < a.entertainment)
	{
		cout<<"It's under the entertainment budget.\n";
	}
	else if (spent.entertainment == a.entertainment)
	{
		cout<<"It's has the same entertainment.\n";
	}
	
	if (spent.clothing > a.clothing)
	{
		cout<<"It's over the clothing budget.\n";
	}
	else if (spent.clothing < a.clothing)
	{
		cout<<"It's under the clothing budget.\n";
	}
	else if (spent.clothing == a.clothing)
	{
		cout<<"It's has the same amount.\n";
	}
	
	if (spent.miscellanous > a.miscellanous)
	{
		cout<<"It's over the miscellanous budget.\n";
	}
	else if (spent.miscellanous < a.miscellanous)
	{
		cout<<"It's under the miscellanous budget.\n";
	}
	else if (spent.miscellanous == a.miscellanous)
	{
		cout<<"It's has the same amount.\n";
	}
	
	if (totalAmount > totalMonthBudget)
	{
		cout<<"It's over the entire monthly budget.\n";
	}
	else if (totalAmount < totalMonthBudget)
	{
		cout<<"It's under the entire monthly budget.\n";
	}
	else if (totalAmount == totalMonthBudget)
	{
		cout<<"It's has the same total.\n";
	}
}
//A student has established the following monthly budget:
//Housing500.00
//Utilities150.00
//Household Expenses 65.00
//Transportation50.00
//Food250.00
//Medical30.00
//Insurance100.00
//Entertainment150.00
//Clothing75.00
//Miscellaneous50.00

//Write a program that has aMonthlyBudget structure designed to hold each of these
//expense categories. The program should pass the structure to a function that asks the
//user to enter the amounts spent in each budget category during a month. The program should then pass the structure to a function that displays a report 
//indicating the
//amount over or under in each category, as well as the amount over or under for the
//entire monthly budget.
