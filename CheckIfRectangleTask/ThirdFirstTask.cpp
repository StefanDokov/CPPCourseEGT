
#include <iostream>
using namespace std;
#include "Point.h"
#include "Rectangle.h"

int main()
{
	Point p1(10, 5);
	Point p2(15, 5);
	Point p3(10, 10);
	Point p4(15, 10);


	Rectangle r1(p1, p2, p3, p4);

	cout << r1.isRectangle() << endl;









}

