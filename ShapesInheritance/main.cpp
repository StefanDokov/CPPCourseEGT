

#include <iostream>
using namespace std;
#include "Shape.h"
#include "TwoDShape.h"
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "TwoDShape.h"

int main()
{

	Shape *sPtr1 = new Rectangle("prav", 30, 5, 5, 5);
	Shape *sPtr2 = new Circle("kryg", 30, 5, 5);
	Shape *sPtr3 = new Square("kvad", 20, 1, 2);

   
	vector<Shape *> myShapes;

	myShapes.push_back(sPtr1);

	myShapes.push_back(sPtr2);

	myShapes.push_back(sPtr3);


	for (int i = 0; i < myShapes.size(); i++) {

		TwoDShape* currShape = dynamic_cast<TwoDShape*>(myShapes[i]);

		myShapes.at(i)->print();
		myShapes.at(i)->getArea();
		if (currShape){
			currShape->draw();

		}
	}














}

