#include "Department.h"

Department::Department(string a) : departmentName(a)
{
}

void Department::displayEmployees()
{
    cout << "Department: " << this->departmentName << endl;
    cout << "Employees: " << this->getNumEmployees() << endl;

    for (auto& emp : this->employees) {
        emp->display();
    }
}

void Department::addEmployees(Employee* a)
{
    this->employees.push_back(a);
    this->numEmployees++;
}

int Department::getNumEmployees()
{
    return this->numEmployees;
}
