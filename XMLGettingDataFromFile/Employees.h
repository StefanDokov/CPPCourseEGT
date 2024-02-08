#pragma once
#include <vector>;
#include <iostream>
#include "Employee.h"
using namespace std;

class Employees {
public:
	void addEmployee(Employee);
	vector<Employee> getAllEmployees();

private:
	vector<Employee> employeeses;
};