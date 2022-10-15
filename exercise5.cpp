#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	srand(time(0));
	int dice_roll = (rand()%5)+1;
	cout << dice_roll;
	return 0;
}
