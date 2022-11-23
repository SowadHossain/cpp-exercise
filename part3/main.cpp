#include <iostream>
#include "TextBox.h"

using namespace std;

int main(){
	TextBox textBox;

	textBox.setValue("I love U :)");
	cout << textBox.getValue();

	return 0;
}
