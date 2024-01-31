#pragma once
#include <string>
#include <iostream>
using namespace std;
#include "Package.h"
#include "Adress.h"

class OvernightPackage : public Package {
public:
	OvernightPackage(int, int, Adress, Adress);
	virtual int calculateCost();
};