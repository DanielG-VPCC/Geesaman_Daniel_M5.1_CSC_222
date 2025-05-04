#include "ProductionWorker.h"
#include <iostream>
#include <string>
using namespace std;

ProductionWorker::ProductionWorker() : Employee() 
{

}

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

}