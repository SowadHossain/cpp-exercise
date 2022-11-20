#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

struct Address{
	string street;
	string city;
	int zipCode;
};

struct Customers{
	int ID;
	string name;
	string email;
	Address address;
};


int main(){
	Customers customer = {
		4554,
		"Sowad Hossain",
		"sowad@gmail.com",
		{"356Blv","California",1384}
	};
/*		
	cout << "Customer ID : ";
	cin >> customer.ID;
		
	cout << "Name: ";
	cin >> customer.name;
		
	cout << "Email: ";
	cin >> customer.email;	
*/		
	cout << "Customer ID : " << customer.ID << endl
		 << "Customer Name: " << customer.name << endl
		 << "Customer Email: "<< customer.email << endl
		 << "Customer Address: "<< customer.address.street << ", "
		 << customer.address.city << ", " << customer.address.zipCode;

	return 0;
}
