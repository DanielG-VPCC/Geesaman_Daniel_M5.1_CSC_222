#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

Employee::Employee()
{

}

Employee::Employee(string n, int e, string h)
{

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

}