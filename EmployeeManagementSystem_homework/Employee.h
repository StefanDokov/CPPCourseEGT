#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	Employee(string, string, string);
	void display();


private:
	string name;
	string employeeID;
	string position;

};