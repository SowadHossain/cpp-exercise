#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int numbers[3];
	ifstream file("numbers.bin",ios::binary);
	if(file.is_open()){
		file.read(reinterpret_cast<char*>(&numbers),sizeof(numbers));
		file.close();
	}

	return 0;
}
