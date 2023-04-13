#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	double base;
	double height;
public:
	Triangle(double base, double height);
	virtual double GetArea();
};

