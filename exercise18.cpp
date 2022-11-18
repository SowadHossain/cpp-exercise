#include <iostream>

using namespace std;

int main(){
	int number[] = {10,20,30};
	int* ptr = &number[(sizeof(number)/sizeof(*number))-1];
	while(ptr >= &number[0]){
		cout << *ptr << endl;
		ptr--;
	}
	return 0;
}
