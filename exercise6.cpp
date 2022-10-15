#include <ios>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	cout << left << setw(15) << "Course"<< setw(15) << "Students" << endl
		<< setw(15) << "C++" << right <<  setw(15) << 100 << endl 
		<< left << setw(15) << "JavaScript"<<  setw(15) << right << 50 << endl;


	return 0;
}
