#include "Rectangle.h"

Rectangle::Rectangle(double a, double b)
{
    this->a = a;
    this->b = b;
}

double Rectangle::GetArea()
{
    return a*b;
}

void Rectangle::SayHi()
{
}
