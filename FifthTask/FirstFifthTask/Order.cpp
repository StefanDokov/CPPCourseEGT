#include "Order.h"
#include "Drinks.h"

Order::Order(string data)
{
    this->setDate(data);
    this->setTotalCost();

}

string Order::getDate()
{
    return this->date;
}

void Order::setDate(string a)
{
    this->date = a;
}

double Order::getTotalCost()
{
    return this->totalCost;
}

void Order::setTotalCost()
{
    double result = 0;
    for (auto& drink : this->drinks) {
        result += drink->calculatePrice();
    }
    this->totalCost = result;
}


void Order::addDrinks(Drinks* b)
{
    this->drinks.push_back(b);
    this->setTotalCost();
}

vector<Drinks*> Order::getAllDrinks()
{
    return this->drinks;
}


