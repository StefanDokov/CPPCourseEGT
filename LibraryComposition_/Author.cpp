#include "Author.h"

Author::Author(string a, string b, string c)
{
    this->setFirstName(a);
    this->setLastName(b);
    this->setCountry(c);
}

string Author::getFirstName()
{
    return this->firstName;
}

void Author::setFirstName(string a)
{
    this->firstName = a;
}

string Author::getLastName()
{
    return this->lastName;
}

void Author::setLastName(string a)
{
    this->lastName = a;
}

string Author::getCountry()
{
    return this->country;
}

void Author::setCountry(string a)
{
    this->country = a;
}
