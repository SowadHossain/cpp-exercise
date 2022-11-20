#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

struct Customers{
	int ID;
	string name;
	string email;
};


int main(){
	Customers customer;
		
	cout << "Customer ID : ";
	cin >> customer.ID;
		
	cout << "Name: ";
	cin >> customer.name;
		
	cout << "Email: ";
	cin >> customer.email;	
		
	cout << "Customer ID : " << customer.ID << endl
		 << "Customer Name: " << customer.name << endl
		 << "Customer Email: "<< customer.email << endl;



	return 0;
}
