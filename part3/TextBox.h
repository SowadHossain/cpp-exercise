#ifndef TEXT_BOX_H
#define TEXT_BOX_H
#include <iostream>
#include <string>

using namespace std;

class TextBox{
public:
	string getValue();
	void setValue(string str);
private:
	string value;
};

#endif //TEXT_BOX_H
