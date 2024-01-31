#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
#include <vector>
using namespace std;


class Department {
public:
	Department(string);
	void displayEmployees();
	void addEmployees(Employee*);
	int getNumEmployees();


private:
	string departmentName;
	vector<Employee*> employees;
	int numEmployees = 0;
};