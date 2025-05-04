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
	/*
	this is the constructor for the employee class
	precondition is that it requires employee data input in the proper format
	postcondition is that it will store the given employee data within their respective variables within this class
	*/
	Employee(string n, int e, string h);

	/*
	These are the accessor (get) functions
	precondition is that there must be a value stored in the variable they are accessing
	postcondition is that they will return the value of the variable they accessed within the private section of this class
	*/
	string getName();
	int getEmployeeNum();
	string getHireDate();

	/*
	These are the mutator (set) functions
	precondition is that the mutator must have been given a value with which it can set the variable it is assigned
	postcondition is that the mutator will modify the value within the priave section of the class
	*/
	void setName(string n);
	void setEmployeeNum(int e);
	void setHireDate(string h);

	/*
	this is the print function for this class
	precondition is that all variables being printed must have a value assigned to them
	postcondtion is that the data in the private section of this class will be output
	*/
	void printEmployee();
};

