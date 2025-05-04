#pragma once
#include "Employee.h"
#include <string>
using namespace std;
class ShiftSupervisor : public Employee
{
private:
	double annualSalary;
	double annualProductionBonus;
public:
	/*
	This is the constructor for this class
	precondition is that the values input must be input in the proper order,
		and this class must have clearly inhereted from Employee
	postcondition is that the input values will be assigned to their respective variables,
		and the constructor for Employee will be utilized for its respective values
	*/
	ShiftSupervisor(string n, int e, string h, double aS, double aPB) : Employee(n, e, h) 
	{
		annualSalary = aS;
		annualProductionBonus = aPB;
		Employee worker(n, e, h);
	};
	
	/*
	These are the accessor (get) functions
	precondition is that there must be a value stored in the variable they are accessing
	postcondition is that they will return the value of the variable they accessed within the private section of this class
	*/
	double getAnnualSalary();
	double getAnnualProductionBonus();

	/*
	These are the mutator (set) functions
	precondition is that the mutator must have been given a value with which it can set the variable it is assigned
	postcondition is that the mutator will modify the value within the priave section of the class
	*/
	void setAnnualSalary(double i);
	void setAnnualProductionBonus(double j);

	/*
	this is the print function for this class
	precondition is that all variables being printed must have a value assigned to them
	postcondtion is that the data in the private section of this class will be output
	*/
	void printShiftSupervisor();
};

