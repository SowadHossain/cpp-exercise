#include <iostream>

using namespace std;

void bubbleSort(int array[],int arraySize);
void printArray(int array[], int arraySize);

int main(){
	int numbers[]={10,20,5,7,6,2,3};
	int size = sizeof(numbers)/sizeof(*numbers);
	cout << "unsorted array" << endl;
	printArray(numbers, size);
	cout <<"--------------"<<endl;
	bubbleSort(numbers,size);
	cout<< "sorted array"<<endl;
	printArray(numbers, size);
	return 0;
}


//functions

void bubbleSort(int array[],int arraySize){
	for(int i =0; i < arraySize; i++){
		for(int j = 0; j < arraySize-1;j++){
			if(array[j] > array[j+1]){
				int temp1;
				temp1 = array[j];
				array[j] = array[j+1];
				array[j+1] = temp1;
			}
		cout << "sorting array" <<endl;

		printArray(array,arraySize);
		}
	}
}


void printArray(int array[], int arraySize){
	for (int i=0; i< arraySize; i++) {
		cout << array[i] << " , ";
	}
	cout << endl;
}

