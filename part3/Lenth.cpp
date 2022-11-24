#include "Lenth.h"

Lenth::Lenth(int value) : value(value) {

}
bool Lenth::operator==(const Lenth& other) const{
	return value == other.value;
}
bool Lenth::operator==(int other) const{
	return value == other;
}
