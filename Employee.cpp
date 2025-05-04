#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

Employee::Employee(string n, int e, string h)
{
	name = n;
	employeeNum = e;
	hireDate = h;
}

string Employee::getName()
{
	return name;
}

int Employee::getEmployeeNum()
{
	return employeeNum;
}

string Employee::getHireDate()
{
	return hireDate;
}

void Employee::setName(string n)
{
	name = n;
}

void Employee::setEmployeeNum(int e)
{
	employeeNum = e;
}

void Employee::setHireDate(string h)
{
	hireDate = h;
}

void Employee::printEmployee()
{
	cout << "Employee name: " << name << endl;
	cout << "Employee number: " << employeeNum << endl;
	cout << "Employee hire date: " << hireDate << endl;
}