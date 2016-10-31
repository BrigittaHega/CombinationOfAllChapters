#include <iostream>
#include <string>
using namespace std;

class RetailItem
{
	private:
		string description;
		int unitsOnHand;
		double price;
	public:
		RetailItem(string, int, double);
		//Mutator
		void setDescription(string);
		void setUnitsOnHand(int);
		void setPrice(double);
		//Accessor
		string getDescription();
		int getUnitsOnHand();
		double getPrice();
};

RetailItem::RetailItem(string desc, int units, double priceList)
{
	description = desc;
	unitsOnHand = units;
	price = priceList;
}

	void RetailItem::setDescription (string desc)
	{
		description = desc;
	}
	void RetailItem::setUnitsOnHand (int units)
	{
		unitsOnHand = units;
	}
	void RetailItem::setPrice (double priceList)
	{
		price = priceList;
	}

	string RetailItem::getDescription()
	{
		return (description);
	}
	int RetailItem::getUnitsOnHand ()
	{
		return (unitsOnHand);
	}
	double RetailItem::getPrice ()
	{
		return (price);
	}

int main()
{
	RetailItem item1("Jacket", 0, 0);
	RetailItem item2("Designer Jeans", 0, 0);
	RetailItem item3("Shirt", 0, 0);
	
	item1.setUnitsOnHand(12);
	item1.setPrice(59.95);  
	
	item2.setUnitsOnHand(40);
	item2.setPrice(34.95);  
	
	item3.setUnitsOnHand(20);
	item3.setPrice(24.95);  
	
	cout<<"       Description   Units   Price\n"
	    <<"                    on hand\n"
	<<"---------------------------------------------------\n"
	<<"Item#1 "<<item1.getDescription() <<"          "<<item1.getUnitsOnHand() <<"    "<< item1.getPrice() <<"  "<<endl
	<< "Item#2 "<<item2.getDescription() <<"  "<<item2.getUnitsOnHand() <<"    "<< item2.getPrice() <<"  "<<endl
	<<"Item#3 "<<item3.getDescription() <<"           "<<item3.getUnitsOnHand() <<"    "<< item3.getPrice();
	
	return 0;
}

//Item #1Jacket1259.95
//Item #2 Designer Jeans 4034.95
//Item #3 Shirt2024.95


//Write a class namedRetailItem that holds data about an item in a retail store. The
//class should have the following member variables:
// • description . A string that holds a brief description of the item.
// • unitsOnHand . Anint that holds the number of units currently in inventory.
// • price . Adouble that holds the item’s retail price.

//Write a constructor that accepts arguments for each member variable, appropriate
//mutator functions that store values in these member variables, and accessor functions
//that return the values in these member variables. 

//Once you have written the class, write
//a separate program that creates threeRetailItem objects and stores the following data
//in them.
