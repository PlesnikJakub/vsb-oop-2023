#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
	double a;
	double b;
public:
	Rectangle(double a, double b);
	virtual double GetArea();
	void SayHi();
};

