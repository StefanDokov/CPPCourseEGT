#include "Rectangle.h"

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}


double Rectangle::getLength() const
{
    return this->length;
}

double Rectangle::getWidth() const
{
    return this->width;
}

double Rectangle::area() const
{
    return this->length * this->width;
}

bool Rectangle::operator>(const Rectangle& other) const
{
    return this->area() > other.area();
}

bool Rectangle::operator<(const Rectangle& other) const
{
    return this->area() < other.area();

}

bool Rectangle::operator==(const Rectangle& other) const
{
    return this->area() == other.area();

}
