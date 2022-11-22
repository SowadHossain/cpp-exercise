#include <iostream>
#include "Rectangle.hpp"

using namespace std;

int main(){
	Rectangle rectangle;
	rectangle.width = 15;
	rectangle.height = 50;

	cout << rectangle.getArea();

	return 0;
}
