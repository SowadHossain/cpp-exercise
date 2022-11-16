#include <iostream>

using namespace std;


int max(int a, int b){
	if (a < b) return b;
	else return a;
}

int main(){
	cout << max(10,20);

	return 0;
}
