#include "Triangle.h"

Triangle::Triangle(double base, double height)
{
	this->base = base;
	this->height = height;
}

double Triangle::GetArea()
{
	return (this->base * this->height)/2;
}
