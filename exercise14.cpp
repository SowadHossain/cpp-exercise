#include <iostream>

using namespace std;

int main(){
	
	int termpretures[]={5,6,7,8};
	int sum;
	for(int termpreture : termpretures)
		sum += termpreture;
	cout << "Avarage termpreture = "<< (double)sum/(sizeof(termpretures)/sizeof(int));

	return 0;
}

