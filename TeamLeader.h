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
	TeamLeader(string n, int e, string h, int s, double hrPay, double mB, int rTH, int aTH) : ProductionWorker(n, e, h, s, hrPay) 
	{
		monthlyBonus = mB;
		reqTrainHrs = rTH;
		attendTrainHrs = aTH;
		ProductionWorker pworker(n, e, h, s, hrPay);
	};
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

