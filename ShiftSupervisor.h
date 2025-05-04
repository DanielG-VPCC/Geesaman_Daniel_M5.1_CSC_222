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
	//implement constructors
	ShiftSupervisor(string n, int e, string h, double aS, double aPB) : Employee(n, e, h) 
	{
		annualSalary = aS;
		annualProductionBonus = aPB;
		Employee worker(n, e, h);
	};
	//accessors and mutators
	double getAnnualSalary();
	double getAnnualProductionBonus();
	void setAnnualSalary(double i);
	void setAnnualProductionBonus(double j);
	//add printShiftSupervisor() that calls printEmployee() and prints additional details
	void printShiftSupervisor();
};

