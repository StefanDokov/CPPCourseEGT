#include "Employees.h"

void Employees::addEmployee(Employee a)
{
    this->employeeses.push_back(a);
}

vector<Employee> Employees::getAllEmployees()
{
    return this->employeeses;
}
