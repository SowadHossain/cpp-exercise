#ifndef LENGTH_H
#define LENGTH_H

#include <compare>
#include <iostream>

class Length{

public: 
	explicit Length(int value);
	bool operator==(const Length& other) const;
	bool operator==(int other) const;
	std::strong_odering operator<=>(const Length& other) const;
	/*
	bool operator<=(const Length& other) const;
	bool operator>(const Length& other) const;
	bool operator>=(const Length& other) const;
	*/
private:
	int value;

};

#endif //LENGTH_H
