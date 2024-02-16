#include "Rectangle.h"

Rectangle::Rectangle(double a, double b): length(a), width(b)
{
}

double Rectangle::area()
{
    return width * length;
}
