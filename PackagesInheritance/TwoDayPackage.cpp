#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(int a, int b, Adress c, Adress d) : Package(a, b, c, d)
{
}

int TwoDayPackage::calculateCost()
{
    return Package::calculateCost() * 2;
}
