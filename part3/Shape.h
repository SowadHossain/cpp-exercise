#ifndef ADVANCED_SHAPE
#define ADVANCED_SHAPE
#include <string>
#include <iostream>

using namespace std;

class Shape{
public:
	void setBackground(string background);
	string getBackground() const;
private:
	string background;
};

#endif //ADVANCED_SHAPE
