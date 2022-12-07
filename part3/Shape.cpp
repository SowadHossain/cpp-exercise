#include <iostream>
#include <string>
#include <type_traits>
#include "Shape.h"

using namespace std;
void Shape::draw() const{
	cout << "drawing Shape"<<endl;
}

void Shape::setBackground(string color){
	background = color;
}
string Shape::getBackground() const{
	return background;
}
