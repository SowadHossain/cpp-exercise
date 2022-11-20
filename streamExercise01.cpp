#include <ios>
#include <iostream>
#include <string>
#include <limits>
#include <utility>

using namespace std;

int getNumber(string prompt){
	int number;
	while (true) {
		cout << prompt;
		cin >> number;
		if(cin.fail()){
			cout << "Enter a valid number! " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else break;
	}
	return number;
}

int main(){
	int first = getNumber("First: ");
	int second = getNumber("Second: ");

	cout << " ------------------ "<< endl 
		 << first << " " << second;

	return 0;
}
