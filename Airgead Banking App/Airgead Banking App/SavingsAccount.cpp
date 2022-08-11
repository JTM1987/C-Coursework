/* Jesse Martin
*  CS210 Programming Languages Project 5-1
*/
#include <conio.h>
#include <iomanip>
#include <iostream>
#include "SavingsAccount.h"

using namespace std;


SavingsAccount::SavingsAccount(double t_investment, double t_monDep, double t_intRate, int t_years) {
	this->m_initialInv = t_investment;
	this->m_depositPerMonth = t_monDep;
	this->m_intRate = t_intRate;
	this->m_years = t_years;
}

//Destructor
SavingsAccount::~SavingsAccount() {

}

void SavingsAccount::calcNoDep() {

	//Print heading

	cout << " Balance and Interest without additional Monthly Deposits" << endl;

	cout << "==========================================================================" << endl;

	//Print table heading

	cout << setw(10) << "Year"

		<< setw(20) << "Year End Balance"

		<< setw(35) << "Year End Earned Interest Rate" << endl;

	cout << "--------------------------------------------------------------------------" << endl;

	//Iterate for given years and calculate interest earned

	int currentyear = 1;

	double yearendBalance = this->m_initialInv;

	while (currentyear <= this->m_years) {

		//Calculate interest

		double interestearned = yearendBalance * this->m_intRate / 100;
		yearendBalance += interestearned;

		// Output results

		cout << right << setw(10) << currentyear << fixed << setprecision(2)

			<< setw(20) << "$" << yearendBalance

			<< setw(35) << "$" << interestearned << endl;

		//Increment the year

		currentyear++;

	}

}

//Prints report considering monthly deposit

void SavingsAccount::calcWithDep() {

	cout << " Balance and Interest without additional Monthly Deposits" << endl;

	cout << "==========================================================================" << endl;

	cout << setw(10) << "Year"

		<< setw(20) << "Year End Balance"

		<< setw(35) << "Year End Earned Interest Rate" << endl;

	cout << "--------------------------------------------------------------------------" << endl;





	//Iterate starting at 1

	int currentyear = 1;

	double yearendBalance = this->m_initialInv;

	while (currentyear <= this->m_years) {

		//calulate interest monthly and find compoud interest

		int month = 1;

		double interestearned = 0.0;

		double monthendbalance = yearendBalance;

		while (month <= 12) {

			//Add monthly deposit

			monthendbalance += this->m_depositPerMonth;

			// Calculating interest

			double monthlyinterest = monthendbalance * this->m_intRate / (100 * 12);

			//Adding monthly/yearly

			interestearned += monthlyinterest;

			// Interest + endMonthBal

			monthendbalance += monthlyinterest;

			//Increase the month by 1

			month++;

		}

		//After 12 months

		yearendBalance = monthendbalance;

		//Print the results

		cout << right << setw(10) << currentyear << fixed << setprecision(2)

			<< setw(20) << "$" << yearendBalance

			<< setw(35) << "$" << interestearned << endl;

		//Increase the year count by one

		currentyear++;

	}

}