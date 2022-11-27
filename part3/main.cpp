#include "Array.h"
#include <iostream>

using namespace std;

int main(){
	
	Array array{10};
	array[0]= 1;
	array[1] = 10;
	cout << array[0]<<endl<<array[1];

	return 0;
}
