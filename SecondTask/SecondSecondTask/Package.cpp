#include "Package.h"

Package::Package(int cost, int kgs, Adress sender, Adress getter): client(sender), reciever(getter)
{
    this->setPrice(cost);
    this->setKg(kgs);
}

int Package::getKg()
{
    return this->kg;
}

void Package::setKg(int a)
{
    this->kg = a;
}

Adress Package::getClient()
{
    return this->client;
}

void Package::setClient(Adress a)
{
    this->client = a;
}

Adress Package::getReceiver()
{
    return this->reciever;
}

void Package::setReceiver(Adress b)
{
    this->reciever = b;
}

void Package::getInfo()
{
    cout << "Client -> " << this->getClient().getName() << ", Reciever -> " << this->getReceiver().getName() << endl;
}

int Package::getPrice()
{
    return this->basePrice;
}

void Package::setPrice(int c)
{
    this->basePrice = c;
}

int Package::calculateCost()
{
    return this->getKg() * this->getPrice();
}
