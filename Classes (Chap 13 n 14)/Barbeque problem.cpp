#include <iostream>
using namespace std;

class Barbeque
{
	private:
		string my_brand;
		string my_model;
	public:
		Barbeque (string brand, string model)
		{
			this->my_brand = brand;
			this->my_model = model;
		};
		
		void loadCoal()
		{
			cout<<"Loading "<<my_brand<<my_model<<" with coal\n";
		};
		
		void light()
		{
			if(this->hasCoal())
			{
				cout<<"NO COAL INSERTED";
			}
			else
			{
				cout<<"COAL INSERTED, LIGHT THE GRILL";
			}
		};
		
		void cook()
		{
			if (this->isLit())
			{
				cout<<"NO FIRE";
			}
			else
			{
				cout<<"GRILL LIT, START COOKING";
			}
		}
		
		void reset()
		{
		};
		
		bool hasCoal()
		{
			return true;
		};
		
		bool isLit()
		{
			return true;
		};
		
		bool isCooking()
		{
			return true;
		};
};

int main()
{
	Barbeque bbq("KNOCKOFF", " CHEAPASS 360");
//	bbq.barbeque;
	bbq.loadCoal();
	bbq.hasCoal();
	bbq.light();
	
	return 0; 
}
