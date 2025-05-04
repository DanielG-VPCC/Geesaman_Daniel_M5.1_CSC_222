// Geesaman_Daniel_M5.1_CSC_222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

void test1();
void test2();
void test3();

int main()
{
    test1();
    test2();
    test3();
}

void test1()
{
    cout << "test production worker object" << endl << endl;
    ProductionWorker prodWorker1{ "John", 2463, "22 Jan 2022", 1, 13 };
    prodWorker1.printProductionWorker();
    cout << endl;

    ProductionWorker prodWorker2{ "Jane", 8776, "02 Dec 2013", 0, 19 };
    prodWorker2.printProductionWorker();
    cout << endl;
}

void test2()
{
    cout << "test shift supervisor object" << endl << endl;
    ShiftSupervisor sSupervisor{"Joey", 5734, "14 Nov 1998", 60000, 3500};
    sSupervisor.printShiftSupervisor();
    cout << endl;
}

void test3()
{
    cout << "test team leader object" << endl << endl;
    TeamLeader tLeader{"Charlie", 112, "1 Apr 1923", 1, 1400, 1300, 10, 42};
    tLeader.printTeamLeader();
    cout << endl;
}

