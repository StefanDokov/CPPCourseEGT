#include "Shape.h"

Shape::Shape(string a) : color(a)
{
}

void Shape::draw() {
	cout << "Drawing a " << this->color << " shape" << endl;

}

double Shape::area() {
	cout << "Shape has undefined area" << endl;
	return 0;
}