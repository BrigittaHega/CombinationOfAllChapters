#include <iostream>
using namespace std;

int main ()
{
	double wavelength;
	
	cout<<"Please enter the wavelength (nE-n):\n";
	cin>>wavelength;
	
	if (wavelength>1E-2)
	{
		cout << "It is radiowaves.";
	}
	else if (wavelength<=1E-2 && wavelength>1E-3)
	{
		cout<<"It is microwaves.\n";
	}
	else if (wavelength<=1E-3 && wavelength>7E-7)
	{
		cout<<"It is infrared.\n";
	}
	else if (wavelength<=7E-7 && wavelength>4E-7)
	{
		cout<<"It is visible light.\n";
	}
	else if (wavelength<=4E-7 && wavelength>1E-8)
	{
		cout<<"It is ultraviolet.\n";
	}
	else if (wavelength<=1E-8 && wavelength>1E-11)
	{
		cout<<"It is X rays.\n";
	}
	if (wavelength<=1E-11)
	{
		cout << "It is Gamma rays.";
	}

	return 0;
}
