#pragma once
#include <string>
#include <iostream>
using namespace std;
#include "Package.h"
#include "Adress.h"

class TwoDayPackage : public Package {
public:
	TwoDayPackage(int, int, Adress, Adress);
	virtual int calculateCost();
};