#include "Ref.h"

Ref::Ref(string a)
{
    this->setName(a);
}

string Ref::getName()
{
    return this->name;
}

void Ref::setName(string a)
{
    this->name = a;
}
