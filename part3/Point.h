#ifndef POINT_H
#define POINT_H
#include <ostream>
#include <istream>

using namespace std;

class Point{
public:
	Point(int x, int y);
	Point();
	int getX()const;
	void setX(int x);
	int getY()const;
	void setY(int y);

	bool operator==(Point& other)const;
private:
	int x;
	int y;

};


ostream& operator<<(ostream& stream, const Point& point);
istream& operator>>(istream& stream, Point& point);

#endif //POINT_H
