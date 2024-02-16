#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
	Circle(string, double);
	double area() override;
	//we override area() here so we can get Area of the circle
	void draw();
private:
	double radius;
};