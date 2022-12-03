#include <iostream>
#include "TextBox.h"

using namespace std;

int main(){

	TextBox box;
	box.enable();
	cout << box.isEnabled()<<endl;
	box.disable();
	cout << box.isEnabled() << endl;
	return 0;
}
