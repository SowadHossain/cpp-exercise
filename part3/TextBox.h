#ifndef TEXT_BOX_H
#define TEXT_BOX_H
#include <iostream>
#include <string>

using namespace std;

class TextBox{
public:
	TextBox() = default;
	explicit TextBox(const string& value);
	string getValue();
	void setValue(string str);
private:
	string value;
};

#endif //TEXT_BOX_H
