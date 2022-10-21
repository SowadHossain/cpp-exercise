#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int sales;
	double commission;
	
	cout << "Sales: $";
	cin >> sales;

	if (sales<= 10'000) {
		commission = 0.10;
	}else if (sales<= 15'000) {
		commission = 0.15;
	}else {
		commission = 0.20;
	}

	return 0;
}
