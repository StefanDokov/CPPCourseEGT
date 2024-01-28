#include "NoAlcoholic.h"

NoAlcoholic::NoAlcoholic(string a, double b, double c, string d, double e, double f) : Drinks(a, b, c, d)
{
    this->setLiters(e);
    this->setCityTax(f);
}

int NoAlcoholic::getLiters()
{
    return this->liters;
}

void NoAlcoholic::setLiters(double a)
{
    this->liters = a;
}

double NoAlcoholic::getCityTax()
{
    return this->cityTax;
}

void NoAlcoholic::setCityTax(double a)
{
    this->cityTax = a;
}

double NoAlcoholic::calculatePrice()
{
    double result = this->getQuantity() * this->getPrice() + this->getCityTax();
    cout << "Cost of " << this->getName() << " is " << result << endl;
    return  result;
}
