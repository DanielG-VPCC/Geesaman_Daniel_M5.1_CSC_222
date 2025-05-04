#pragma once
#include "ProductionWorker.h"
using namespace std;

class TeamLeader : public ProductionWorker
{
private:
	double monthlyBonus;
	int reqTrainHrs;
	int attendTrainHrs;
public:
	//use initalizer lists to initialize ProductionWorker and Employee parts
	TeamLeader() : ProductionWorker() {};
	//provide appropriate accessors and mutators
	double getMonthlyBonus();
	int getReqTrainHrs();
	int getAttendTrainHrs();
	void setMonthlyBonus(double i);
	void setReqTrainHrs(int j);
	void setAttendTrainHrs(int k);
	//add printTeamLeader() that calls printProductionWorker() and additional details
	void printTeamLeader();
};

