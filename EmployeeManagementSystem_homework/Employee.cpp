#include "Employee.h"

Employee::Employee(string a, string b, string c): name(a), employeeID(b), position(c)
{
}

void Employee::display()
{
	cout << "Name: " << this->name << ", EmployeeID: " << this->employeeID << ", Position: " << this->position << endl;

}
