#include <iostream>

using namespace std;

int linearSearchAlgo(int numbers[], int size, int target){
	for(int i=0; i < size; i++){
		if (numbers[i]==target)  
			return i;
	}return -1;
}

int main(){
	int numbers[] ={10,30 ,55, 54,545,55,7,8,6,1,11} ;
	int target = 0;
	int size = sizeof(numbers)/sizeof(*numbers);
	cout << linearSearchAlgo(numbers,size,target);

	return 0;
}
