#ifndef POINT_H
#define POINT_H

class Point{
public:
	Point(int x, int y);
	int getX()const;
	void setX(int x);
	int getY()const;
	void setY(int y);

	bool operator==(Point& other)const;
private:
	int x;
	int y;

};



#endif //POINT_H
