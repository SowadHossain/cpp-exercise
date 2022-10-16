#include <iostream>

using namespace std;

int main(){
	bool us_citizen = true ;
	bool hasBachelorDegree = false;
	short yearsOfExperience= 3;
	
	bool isEligible = us_citizen && (hasBachelorDegree || (yearsOfExperience>2));

	cout << boolalpha << isEligible << endl;

	return 0;
}
