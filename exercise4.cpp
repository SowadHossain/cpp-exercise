#include <iostream>
#include <ostream>
#include <math.h>

using namespace std;
int main(){
	const float PI = 3.14;
	double radius;

	cout << "Radius = " ;
	cin >> radius ;

	double Area = PI * pow(radius , 2);
	cout << "Area of the circle : " << Area << " squre meters" << endl;

	return 0;
}

