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
	//create constructors using constructor initializer lists to initialize the base class
	ProductionWorker(string n, int e, string h, int s, double hrPay) : Employee(n, e, h) 
	{
		shift = s;
		hourlyPayRate = hrPay;
		Employee worker(n, e, h);
	};
	//needs accessor and mutator functions - need to figure out how to do that
	int getShift();
	double getHourlyPayRate();
	void setShift(int i);
	void setHourlyPayRate(int j);
	//add printProductionWorker() that calls printEmployee() and prints additional details
	void printProductionWorker();

	string dayOrNight();
};

