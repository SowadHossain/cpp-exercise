#ifndef TEXT_BOX_H
#define TEXT_BOX_H
#include <iostream>
#include <string>
#include "Widget.h"

using namespace std;

class TextBox : public Widget{
public:
	TextBox() = default;
	explicit TextBox(const string& value);
	string getValue();
	void setValue(string str);
private:
	string value;
};

#endif //TEXT_BOX_H
