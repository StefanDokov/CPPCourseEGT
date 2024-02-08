#include "Employee.h"
Employee::Employee(string a, string b, string c): name(a), type(b), age(c) , workspace(0, 0, 0) {

}
string Employee::getName()
{
    return this->name;
}

string Employee::getType()
{
    return this->type;
}

string Employee::getAge()
{
    return this->age;
}

Workspace Employee::getWorkstation()
{
    return this->workspace;
}

void Employee::setWorkspace(Workspace a)
{
    this->workspace = a;
}

void Employee::display()
{
    cout << "Name: " << this->getName() << ", Type: " << this->getType() << ", Age: " << this->getAge() << endl;
}
