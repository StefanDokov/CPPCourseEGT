#pragma once
#include <iostream>
#include <string>
using namespace std;

class Workspace {
public:
	Workspace(int, int, int);
	int getBuilding();
	int getFloor();
	int getDesk();
	void print();
private:
	int building;
	int floor;
	int desk;
};