#include "Usera.h"

Usera::Usera(string a, string b)
{
    this->setUsername(a);
    this->setPassword(b);
}

string Usera::getUsername()
{
    return this->username;
}

void Usera::setUsername(string a)
{
    this->username = a;
}

string Usera::getPassword()
{
    return this->password;
}

void Usera::setPassword(string a)
{
    this->password = a;
}
