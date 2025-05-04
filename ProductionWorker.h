#pragma once
#include <string>
#include "Employee.h"
using namespace std;
class ProductionWorker : public Employee
{
private:
	int shift;
	string shiftTime;
	double hourlyPayRate;
public:
	/*
	This is the constructor for this class
	precondition is that the values input must be input in the proper order, 
		and this class must have clearly inhereted from Employee
	postcondition is that the input values will be assigned to their respective variables, 
		and the constructor for Employee will be utilized for its respective values
	*/
	ProductionWorker(string n, int e, string h, int s, double hrPay) : Employee(n, e, h) 
	{
		shift = s;
		hourlyPayRate = hrPay;
		Employee worker(n, e, h);
	};

	/*
	These are the accessor (get) functions
	precondition is that there must be a value stored in the variable they are accessing
	postcondition is that they will return the value of the variable they accessed within the private section of this class
	*/
	int getShift();
	double getHourlyPayRate();

	/*
	These are the mutator (set) functions
	precondition is that the mutator must have been given a value with which it can set the variable it is assigned
	postcondition is that the mutator will modify the value within the priave section of the class
	*/
	void setShift(int i);
	void setHourlyPayRate(int j);

	/*
	this is the print function for this class
	precondition is that all variables being printed must have a value assigned to them
	postcondtion is that the data in the private section of this class will be output
	*/
	void printProductionWorker();

	/*
	this is the function to assign a string "day" or "night" using the int value given
	precondition is that the shift value must exist and contain either a 1 or a 0
	postcondition is that using the value 1 or 0 this function will return either day or night for use in the print function
	*/
	string dayOrNight();
};

