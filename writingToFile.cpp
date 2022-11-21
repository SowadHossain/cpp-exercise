#include <ios>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

	ofstream file;
	file.open("data.txt");
	if (file.is_open()){
		// CSV Comma Separated Value
		file << setw(5) << left 
					   << "ID" << setw(15) << "title" << setw(5) << "Year\n"
			<< setw(5) << "1" << setw(15) << "Terminator 1" << setw(5) << "1984\n"
			<< setw(5) << "2" << setw(15) << "Terminator 2" << setw(5) << "1991\n"
			<< setw(5) << "3" << setw(15) << "Minions" << setw(5) << "2015\n";
		file.close();
	}


	return 0;
}

