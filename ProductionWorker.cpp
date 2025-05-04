#include "ProductionWorker.h"
#include <iostream>
#include <string>
using namespace std;

int ProductionWorker::getShift()
{
	return shift;
}

double ProductionWorker::getHourlyPayRate()
{
	return hourlyPayRate;
}

void ProductionWorker::setShift(int i)
{
	shift = i;
}

void ProductionWorker::setHourlyPayRate(int j)
{
	hourlyPayRate = j;
}

void ProductionWorker::printProductionWorker()
{
	cout << "Shift: " << dayOrNight() << endl;
	cout << "Hourly pay rate: $" << hourlyPayRate << endl;
	printEmployee();
}

string ProductionWorker::dayOrNight()
{
	if (shift == 1)
	{
		return "day";
	}
	else if (shift == 0)
	{
		return "night";
	}
	else
	{
		return 0;
	}
}