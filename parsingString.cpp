#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

struct Movie{
	string title;
	int year;
};

int main(){
	Movie movie;
	string str;
	getline(cin,str);
	stringstream stream;
	stream.str(str);

	getline(stream,movie.title,',');
	stream >> movie.year;

	cout << "-----------\n"
		 << movie.title
		 << "---------" 
		 << movie.year;

	return 0;
}
