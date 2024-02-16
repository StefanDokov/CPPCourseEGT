#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
	Circle(double);
	double area() override;
	//we override area() here so we can get Area of the circle
private:
	double radius;
};