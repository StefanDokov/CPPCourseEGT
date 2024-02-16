#include "Circle.h"

Circle::Circle(double b) : radius(b)
{
}

double Circle::area()
{
    double pi = 3.14159;
    return pi * (radius * radius);
}
