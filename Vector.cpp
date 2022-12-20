#include <iostream>
#include "Vector.h"


RDec2D operator+(const RDec2D vector1, const RDec2D vector2) {
	RDec2D result{ vector1.x + vector2.x, vector1.y + vector2.y };
	return result;
}

std::ostream& operator<<(std::ostream& a, const RDec2D b) {
	return a << "{" << b.x << ";" << b.y << "}";
}

RDec2D operator-(const RDec2D vector1, const RDec2D vector2) {
	RDec2D result{ vector1.x - vector2.x, vector1.y - vector2.y };
	return result;
}
RDec2D operator*(const RDec2D vector1, const RDec2D vector2) {
	RDec2D result{ vector1.x * vector2.x, vector1.y * vector2.y };
	return result;
}
RDec2D operator/(const RDec2D vector1, const RDec2D vector2) {
	RDec2D result{ vector1.x / vector2.x, vector1.y / vector2.y };
	return result;
}
double norm(RDec2D& vector1) {
	double result{ sqrt(vector1.x * vector1.x + vector1.y * vector1.y) };
	return result;
}
double dot(RDec2D& vector1, RDec2D& vector2) {
	double result{ sqrt(vector1.x * vector2.x + vector1.y * vector2.y) };
	return result;
}