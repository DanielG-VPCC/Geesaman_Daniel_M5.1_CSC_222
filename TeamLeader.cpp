#include "TeamLeader.h"
#include <iostream>
#include <string>
using namespace std;

double TeamLeader::getMonthlyBonus()
{
	return monthlyBonus;
}

int TeamLeader::getReqTrainHrs()
{
	return reqTrainHrs;
}

int TeamLeader::getAttendTrainHrs()
{
	return attendTrainHrs;
}

void TeamLeader::setMonthlyBonus(double i)
{
	monthlyBonus = i;
}

void TeamLeader::setReqTrainHrs(int j)
{
	reqTrainHrs = j;
}

void TeamLeader::setAttendTrainHrs(int k)
{
	attendTrainHrs = k;
}

void TeamLeader::printTeamLeader()
{
	cout << "Monthly bonus: $" << monthlyBonus << endl;
	cout << "Required training hours: " << reqTrainHrs << endl;
	cout << "Attended training hours: " << attendTrainHrs << endl;
	printProductionWorker();
}
