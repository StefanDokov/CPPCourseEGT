#include "Box.h"
#include <iostream>
using namespace std;


Box::Box(double w, double l, double h) : width(w), length(l), height(h) {}


double Box::getWidth() const
{
    return this->width;;
}

double Box::getLength() const
{
    return this->length;
}

double Box::getHeight() const
{
    return this->height;
}

void Box::setWidth(double a)
{
    this->width = a;
}

void Box::setLength(double a)
{
    this->length = a;
}

void Box::setHeight(double a)
{
    this->height = a;
}

Box Box::operator+(const Box& other) const
{
    return Box(width + other.width, length + other.length, height + other.height);
}

ostream& operator<<(std::ostream& output, const Box& box) {
    output << "Width: " << box.getWidth() << ", Length: " << box.getLength() << ", Height: " << box.getHeight();
    return output;
}

