#include <cctype>
#include <cstdio>
#include <ios>
#include <iostream>
#include <string>


using namespace std;

bool isValid(string custormerNumber);

int main(){
	string custormerNumber;
	getline(cin,custormerNumber);
	cout << isValid(custormerNumber);

	return 0;
}

bool isValid(string custormerNumber){
	bool num,ch;
	if(isalpha(custormerNumber[0])&& isalpha(custormerNumber[1]))
			ch = true;
	else return false;
		for(int i=2;i<6;i++){
			if(isdigit(custormerNumber[i])) 
				num = true;
			else return false;
	}
	return true;
	//if(num && ch) return true;
	//else return false;

}
