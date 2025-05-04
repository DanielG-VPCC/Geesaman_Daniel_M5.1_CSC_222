#include "ShiftSupervisor.h"
#include <iostream>
#include <string>
using namespace std;

double ShiftSupervisor::getAnnualSalary()
{
	return annualSalary;
}

double ShiftSupervisor::getAnnualProductionBonus()
{
	return annualProductionBonus;
}

void ShiftSupervisor::setAnnualSalary(double i)
{
	annualSalary = i;
}

void ShiftSupervisor::setAnnualProductionBonus(double j)
{
	annualProductionBonus = j;
}

void ShiftSupervisor::printShiftSupervisor()
{
	cout << "Annual salary: $" << annualSalary << endl;
	cout << "Annual production bonus: $" << annualProductionBonus << endl;
	printEmployee();
}
