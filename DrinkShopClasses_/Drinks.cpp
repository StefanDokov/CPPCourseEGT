#include "Drinks.h"
#include <array>

Drinks::Drinks(string a, double b, double c, string d)
{
    this->setName(a);
    this->setPrice(b);
    this->setQuantity(c);
    this->setType(d);
}

string Drinks::getName()
{
    return this->name;
}

void Drinks::setName(string a)
{
    this->name = a;
}

double Drinks::getPrice()
{
    return this->price;
}

void Drinks::setPrice(double a)
{
    if (a > 0) {

    this->price = a;
    }
}

double Drinks::getQuantity()
{
    return this->quantity;
}

void Drinks::setQuantity(double a)
{
    if (a > 0) {

        this->quantity = a;
    }
}

string Drinks::getType()
{
    return this->type;
}

void Drinks::setType(string a)
{
    const string drinkTypes[] = {"wine", "gin", "whiskey", "water", "juice", "ice tea" };

    while (true) {
        bool found = false;
        for (const auto& str : drinkTypes) {
            if (str == a) {
                found = true;
                break;
            }
        }
        if (found) {
            this->type = a;
            break;
        }
        else {
            cout << "This type in not found in the list. Our types are: wine, gin, whiskey, water, juice, ice tea" << endl;
            cout << "Write the type you want:" << endl;
            cin >> a;
        }


    }

}

void Drinks::print()
{
    cout << "Drink -> " << this->getName() << ", Type -> " << this->getType() << ", Quantity -> " << this->getQuantity() << ", Price -> " << this->getPrice() << "." << endl;
}

double Drinks::calculatePrice()
{
    return this->getPrice() * this->getQuantity();
}
