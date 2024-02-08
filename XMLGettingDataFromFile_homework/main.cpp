#pragma once
#include <iostream>
#include "pugixml.hpp"
#include <string>
#include "Employee.h"
#include "Employees.h"
#include "Workspace.h"
using namespace std;
using namespace pugi;

static void fillEmployees(const char* dir,Employees& obj) {
   
    xml_document doc;

    if (!doc.load_file(dir)) {
        
        cout << "Not loaded" << endl;
    }

    xml_node empls = doc.first_child().first_child();
        
        for (xml_node employeeNode = empls.child("Employee"); employeeNode; employeeNode = employeeNode.next_sibling("Employee")) {
            // Get attributes
            string name = employeeNode.attribute("Name").value();
            string type = employeeNode.attribute("Type").value();
            string age = employeeNode.attribute("Age").value();
            // Create Employee object and add to vector
            Employee curr(name, type, age);

            xml_node workplaceNode = employeeNode.child("Workstation");

            int buildingg = atoi(workplaceNode.attribute("Building").value());
            int floor = atoi(workplaceNode.attribute("Floor").value());
            int desk = atoi(workplaceNode.attribute("Desc").value());

            Workspace place(buildingg, floor, desk);
            curr.setWorkspace(place);
            obj.addEmployee(curr);
        }
     
    
}

void printEmployees(vector<Employee>& employees) {

    for (auto& emp : employees) {
        emp.display();
        emp.getWorkstation().print();
    }
}

int main()
{
    /*xml_document doc;

    if (!doc.load_file("employeesz.xml")) {
        return -1;
        cout << "Not loaded" << endl;
    }

    xml_node empls = doc.child("EmployeesData").child("Employees");*/

    /*for (xml_node_iterator it = empls.begin(); it != empls.end(); ++it)
    {
        cout << "Employee: ";

        for (xml_attribute_iterator ait = it->attributes_begin();
            ait != it->attributes_end();
            ++ait)
        {
            cout << " " << ait->name() << " = " << ait->value();
        }
        cout << endl;
    }*/

    const char* dir = "employees.xml";
    Employees employ;

    fillEmployees(dir, employ);
   
    vector<Employee> allEmpls = employ.getAllEmployees();
    
    printEmployees(allEmpls);

    cout << "Hello World!\n";

    return 0;
}
