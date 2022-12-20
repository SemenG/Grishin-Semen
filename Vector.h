#pragma once

#include <iostream>

struct RDec2D {
	double x = 0.0;
	double y = 0.0;
};

RDec2D operator+(const RDec2D vector1, const RDec2D vector2); // +
std::ostream& operator<<(std::ostream& a, const RDec2D b);    // <<
RDec2D operator-(const RDec2D vector1, const RDec2D vector2); // -
RDec2D operator*(const RDec2D vector1, const RDec2D vector2); // *
RDec2D operator/(const RDec2D vector1, const RDec2D vector2); // /
double norm(RDec2D& vector1);
double dot(RDec2D& vector1, RDec2D& vector2);


