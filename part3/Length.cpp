#include "Length.h"

Length::Length(int value) : value(value) {}

bool Length::operator==(const Length& other) const{
	return value == other.value;
}

bool Length::operator==(int other) const{
	return value == other;
}

std::strong_odering Length::operator<=>(const Length &other) const{
	return value <=> other.value;
}

