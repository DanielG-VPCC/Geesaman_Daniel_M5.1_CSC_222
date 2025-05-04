#pragma once
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	int employeeNum;
	string hireDate;
public:
	//create one or more constructors
	Employee();
	Employee(string n, int e, string h);
	//provide accessor (get) and mutator (set) functions
	string getName();
	int getEmployeeNum();
	string getHireDate();
	void setName(string n);
	void setEmployeeNum(int e);
	void setHireDate(string h);
	//add a function called printEmployee() that prints all the employee's information
	void printEmployee();
};

