#include "Adress.h"

Adress::Adress(string a, string b, string c, int d)
{
    this->setName(a);
    this->setCity(b);
    this->setStreet(c);
    this->setPhone(d);
}

string Adress::getName()
{
    return this->name;
}

void Adress::setName(string name)
{
    this->name = name;
}

string Adress::getCity()
{
    return this->city;
}

void Adress::setCity(string city)
{
    this->city = city;
}

string Adress::getStreet()
{
    return this->street;
}

void Adress::setStreet(string street)
{
    this->street = street;
}

int Adress::getPhone()
{
    return this->phone;
}

void Adress::setPhone(int phone)
{
    this->phone = phone;
}
