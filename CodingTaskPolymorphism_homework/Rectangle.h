#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(string, double, double);
	double area() override;
	//we override area() here so we can get Area of the rectangle
	void draw();
private:
	double length;
	double width;
};