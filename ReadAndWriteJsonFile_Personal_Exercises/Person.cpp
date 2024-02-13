#include "Person.h"

Person::Person(string a, int b, string c, string d): name(a), age(b), gender(c), occupation(d)
{
}

void Person::print()
{
	cout << "Name : " << this->name << ", Age : " << this->age << ", Gender : " << this->gender << ", Occupation : " << this->occupation << endl;
}
