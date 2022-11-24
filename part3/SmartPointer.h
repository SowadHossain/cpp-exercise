#ifndef SMART_POINTER_H
#define SMART_POINTER_H
#include <iostream>

using namespace std;

class SmartPointer {
public:
	explicit SmartPointer(int* ptr);
	~SmartPointer();

private:
	int* ptr;
};

#endif
