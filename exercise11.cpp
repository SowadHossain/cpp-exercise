#include <iostream>

using namespace std;

int main(){
	int num1, num2, biggerNum;
	cout << "enter two numbers : "<<endl;
	cin >> num1 >> num2;
	
	/* usign if statement */ 
//	if (num1<num2) biggerNum = num2;
//	else biggerNum = num1;
	
	// using conditional operator
	
	biggerNum = (num1 > num2 ) ? num1 : num2;


	cout << biggerNum;


	return 0;
}
