#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(int a, int b, Adress c, Adress d) : Package(a, b, c, d)
{
}

int OvernightPackage::calculateCost()
{
    return Package::calculateCost() * 5;
}
