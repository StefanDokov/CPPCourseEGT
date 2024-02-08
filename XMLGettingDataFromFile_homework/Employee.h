#pragma once
#include <iostream>
#include <string>
#include "Workspace.h"
using namespace std;


class Employee {
public:
	Employee(string, string, string);
	string getName();
	string getType();
	string getAge();
	Workspace getWorkstation();
	void setWorkspace(Workspace);
	void display();
private:
	string name;
	string type;
	string age;
	Workspace workspace;
};