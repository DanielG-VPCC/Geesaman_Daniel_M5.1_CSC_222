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
	/*
	This is the constructor for this class
	precondition is that the values input must be input in the proper order,
		and this class must have clearly inhereted from ProductionWorker, which must have inherited from Employee
	postcondition is that the input values will be assigned to their respective variables,
		and the constructors for ProductionWorker and Employee will be utilized for their respective values
	*/
	TeamLeader(string n, int e, string h, int s, double hrPay, double mB, int rTH, int aTH) : ProductionWorker(n, e, h, s, hrPay) 
	{
		monthlyBonus = mB;
		reqTrainHrs = rTH;
		attendTrainHrs = aTH;
		ProductionWorker pworker(n, e, h, s, hrPay);
	};

	/*
	These are the accessor (get) functions
	precondition is that there must be a value stored in the variable they are accessing
	postcondition is that they will return the value of the variable they accessed within the private section of this class
	*/
	double getMonthlyBonus();
	int getReqTrainHrs();
	int getAttendTrainHrs();

	/*
	These are the mutator (set) functions
	precondition is that the mutator must have been given a value with which it can set the variable it is assigned
	postcondition is that the mutator will modify the value within the priave section of the class
	*/
	void setMonthlyBonus(double i);
	void setReqTrainHrs(int j);
	void setAttendTrainHrs(int k);

	/*
	this is the print function for this class
	precondition is that all variables being printed must have a value assigned to them
	postcondtion is that the data in the private section of this class will be output
	*/
	void printTeamLeader();
};

