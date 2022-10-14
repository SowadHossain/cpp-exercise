#include <iostream>
#include "ostream"

using namespace std;

int main(){
	double fahrenheit,celsius;

	cout << "Enter fahrenheit tempreture : "; 
	cin >> fahrenheit; 

	celsius = ((fahrenheit - 32)/9)*5;
	cout << "Tempreture in celsius : " << celsius << endl;


	return 0;
}
