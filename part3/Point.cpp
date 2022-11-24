#include "Point.h"

bool Point::operator==(Point& other)const{
	return (x==other.x)&&(y==other.y);
}
Point::Point(int x,int y) : x(x), y(y) {}

int Point::getX()const{
	return x;
}
void Point::setX(int x) {
	Point::x = x;
}

int Point::getY()const{
	return y;
}
void Point::setY(int y) {
	Point::y = y;
}

