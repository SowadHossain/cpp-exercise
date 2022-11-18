#include <iostream>
#include <utility>

using namespace std;


void swap(int* first, int* second);

int main(){
	int x = 10 , y = 20;
	swap(&x,&y);
	cout << x << ' ' << y;
	return 0;
}

void swap(int* first, int* second){
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;
	
}
