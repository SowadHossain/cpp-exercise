#include "Point.h"
#include <iostream>

using namespace std;

int main(){
	Point first{10,20};
	Point second;

	cout << first<<endl
		<< "Enter 2nd point(x,y): ";
	cin >> second;

	cout <<"---------------\n"<< second;

	return 0;
}
