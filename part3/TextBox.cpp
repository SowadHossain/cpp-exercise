#include "TextBox.h"
#include <iostream>
#include <string>

using namespace std;

string TextBox::getValue(){
	return value;
}
void TextBox::setValue(string str){
	this->value = str;
}
