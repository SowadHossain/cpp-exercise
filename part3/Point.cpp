#include "Point.h"
#include <istream>
#include <ostream>

Point::Point(int x,int y) : x(x), y(y) {}
Point::Point(){}

bool Point::operator==(Point& other)const{
	return (x==other.x)&&(y==other.y);
}

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

ostream& operator<<(ostream& stream, const Point& point){
	stream << '(' << point.getX()
		   << ", " << point.getY()
		   << ')';
	return stream;
}

istream& operator>>(istream& stream, Point&  point){
	int x,y;
	stream >> x >> y;
	point.setX(x);
	point.setY(y);
	return stream;
}
