#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
	virtual double area() = 0;
	//abstract class. area() must be override in children classes
};