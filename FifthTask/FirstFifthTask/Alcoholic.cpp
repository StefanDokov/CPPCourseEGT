#include "Alcoholic.h"

Alcoholic::Alcoholic(string a, double b, double c, string d, double e, double f) : Drinks(a, b, c, d)
{
    this->setVolume(e);
    this->setTax(f);
}

double Alcoholic::getVolume()
{
    return this->volume;
}

void Alcoholic::setVolume(double a)
{
    this->volume = a;
}

double Alcoholic::getTax()
{
    return this->tax;
}

void Alcoholic::setTax(double a)
{
    this->tax = a;
}

double Alcoholic::calculatePrice()
{
    double result = this->getQuantity() * (this->getPrice() * this->getTax());
    cout << "Cost of " << this->getName() << " is " << result << endl;
    return  result;
}
