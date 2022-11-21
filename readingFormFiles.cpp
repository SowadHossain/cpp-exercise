#include <cstdio>
#include <ios>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct Movie
{
	int id;
	string title;
	int year;
};

int main()
{

	ifstream file;
	file.open("data.txt");
	if (file.is_open())
	{
		string str;
		getline(file, str);
		while (!file.eof())
		{
			Movie movie;

			getline(file, str, ' ');
			if (str.empty())
				continue;
			movie.id = stoi(str);

			getline(file, str, ' ');
			movie.title = str;

			getline(file, str);
			movie.year = stoi(str);

			cout << movie.title << endl;
		}
		file.close();
	}

	return 0;
}
