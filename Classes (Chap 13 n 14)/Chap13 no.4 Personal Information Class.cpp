#include <iostream>
#include <string>
using namespace std;

class PersonalInfo
{
	private:
		string name;
		string address;
		int age;
		string phone;
	public:
		//Member function declaration
		//mutator
		void setName(string);
		void setAddress(string);
		void setAge(int);
		void setPhone(string);
		//Accessor
		string getName(); 
		string getAddress();
		int getAge();
		string getPhone();
	//	string DisplayMonth();	
	//	int getDisplayMonth() const;
};
	string PersonalInfo::getName()
   {
   	    return(name);
   }
   int PersonalInfo::getAge()
   {
   	    return(age);
   }
   
   string PersonalInfo::getPhone()
   {
   	    return(phone);
   }
   
   string PersonalInfo::getAddress()
   {
   		return (address);
   }
   
   void PersonalInfo::setName(string nameList)
   {
   	  name = nameList;
   }
   void PersonalInfo::setAge(int ageNum)
   {
   	  age = ageNum;
   }
   
   void PersonalInfo::setPhone(string phoneNum)
   {
   	  phone=phoneNum;
   }
   void PersonalInfo::setAddress(string addressList)
   {
   	address = addressList;
   }
   
int main()
{
	PersonalInfo Me;
	PersonalInfo Mother;
	PersonalInfo Sister;
	
	Me.setName("Ega");
	Me.setAge(19);
	Me.setAddress("Jl. Cempaka Putih Tengah 26A/6"); 
	Me.setPhone("08568517096");
	
	Mother.setName("Titis");
	Mother.setAge(45);
	Mother.setAddress("Jl. Cempaka Putih Tengah 26A/6"); 
	Mother.setPhone("081280046147");
	
	Sister.setName("Grace");
	Sister.setAge(20);
	Sister.setAddress("Jl. Cempaka Putih Tengah 26A/6"); 
	Sister.setPhone("081286038349");   
	
	cout<<"Name: "<<Me.getName()<<" Age: "<<Me.getAge()<<" Address: "<< Me.getAddress()<<" Phone Number: "<<Me.getPhone()<<endl
	<< "Name: "<<Mother.getName()<<" Age: "<<Mother.getAge()<<" Address: "<< Mother.getAddress()<<" Phone Number: "<<Mother.getPhone()<<endl
	<<"Name: "<<Sister.getName()<<" Age: "<<Sister.getAge()<<" Address: "<< Sister.getAddress()<<" Phone Number: "<<Sister.getPhone();
	
	return 0;
}

// class that holds the following personal data: name, address, age, and phone
//number. //Write appropriate accessor and mutator functions. Demonstrate the class by
//writing //a program that creates three instances of it. One instance should hold your information, and the other two should hold your friends’ or family members’ information.
