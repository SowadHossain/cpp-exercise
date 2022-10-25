#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout << "Enter two number: ";
	cin >> a >>b ;
	char op;
	cout << "Enter the operator: ";
	cin >> op;
	
	switch (op) {
		case '+': 
			cout<< a + b;
			break;
		case '-':
			if (a>b) cout << a-b;
			else cout<< b-a;
			break;
		case '/':
			cout << (double)a/b;
			break;
		case '*':
			cout << a*b;
			break;
		default:
			break;
	}



	return 0;
}

