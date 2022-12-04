#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

void Shape::setBackground(string color){
	background = color;
}
string Shape::getBackground() const{
	return background;
}
