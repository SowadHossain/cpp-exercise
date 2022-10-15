#include <cstdio>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main(){
	
	string street,city,state,zipCode;
	
	cout << "Your Street: ";
	getline(cin, street);
	cout << "Your City: ";
	getline(cin, city);
	cout << "Your State: ";
	getline(cin, state);
	cout << "Your Zip Code: ";
	getline(cin, zipCode);
	
	cout<< "Adress: "<< endl 
		<< street<< endl
		<< city<<"," << state << "," << zipCode << endl;


	return 0;
}
