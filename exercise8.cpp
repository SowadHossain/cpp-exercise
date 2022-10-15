#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	string names[3];
	
	cout << "1st name : " ;
	getline(cin, names[0]);

    cout << "2nd name : " ;
	getline(cin, names[1]);

	cout << "3rd name : " ;
	getline(cin, names[2]);

	cout << names[0];

	return 0;
}
