#pragma once
/* Jesse Martin
*  CS210 Programming Languages Project 5-1
*/
#include <limits>
#pragma once
#ifndef SAVINGSACCOUNT_H_

#define SAVINGSACCOUNT_H_

using namespace std;

class SavingsAccount {

public:
	// Default constructor/destructor
	SavingsAccount(double, double, double, int);

	virtual ~SavingsAccount();

	void calcWithDep();

	void calcNoDep();



private:

	double m_initialInv;
	double m_depositPerMonth;
	double m_intRate;
	int m_years;
};

#endif	