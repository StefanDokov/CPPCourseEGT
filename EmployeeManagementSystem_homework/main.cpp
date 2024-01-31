

#include <iostream>
#include "Employee.h"
#include "Department.h"

int main()
{
	Employee e1("Ivan", "563", "Junior");
	Employee e2("Ivan2", "565", "Junior2");
	Employee e3("Ivan3", "568", "Junior3");

	Department d1("Tech");

	d1.addEmployees(&e1);
	d1.addEmployees(&e2);
	d1.addEmployees(&e3);

	d1.displayEmployees();


}

