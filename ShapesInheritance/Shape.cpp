#include "Shape.h"
#include <string>
#include <iostream>
using namespace std;

Shape::Shape(string shape, int sideA, int position, int size) 
{
    this->setSideA(sideA);
    this->setShape(shape);
    this->setPosition(position);
    this->setSize(size);

}

int Shape::getArea()
{
    cout << "Shape Class Area is " << this->position << endl;
    return 0;
}

void Shape::print()
{
    cout << "The Shape Class side is " << this->sideA << endl;
}


int Shape::getSideA()
{
    return this->sideA;
}

void Shape::setSideA(int x)
{
    this->sideA = x;
}




string Shape::getShape() {
    return this->shape;
}

void Shape::setShape(string shape) {
    this->shape = shape;
}

int Shape::getSize()
{
    return this->size;
}

void Shape::setSize(int x)
{
    this->size= x;
}

int Shape::getPosition()
{
    return this->position;
}

void Shape::setPosition(int x)
{
    this->position = x;
}