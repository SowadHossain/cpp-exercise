#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

string doubleToString(double number){
	stringstream stream;
	stream << fixed << setprecision(2) << number;
	return stream.str();
}

int main(){
	double number;
	cout << "Enter a number :";
	cin >> number;
	string str = doubleToString(number);
	
	cout << "-----------\n"
		<< str ;

	return 0;
}
