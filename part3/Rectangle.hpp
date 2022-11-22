#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

class Rectangle{
public:
	void draw();
	int getArea();
	//Getter (Accessor)
	int getWidth();
	int getHeight();
	//Setter (mutator)
	void setWidth(int width);
	void setHeight(int height);

private:
	int width;
	int height;
};


#endif //ADVANCED_RECTANGLE_H
