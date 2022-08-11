/* Jesse Martin
*  CS210 Programming Languages Project 5-1
*/
#pragma once
#include <iostream>
#include <string.h>

#include "SavingsAccount.h"
#include <sstream>

using namespace std;

void repeat(char input, int count) {
	for (int i = 0; i != count; i++)
	{
		printf("%c", input);
	}
}

void validateInput() {
	while (cin.fail()) {
		"Enter a valid number!";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		continue;
	}
}

int main() {


	while (1) {
		repeat(' ', 30);
		repeat('*', 38);
		cout << endl;
		repeat(' ', 30);
		repeat('*', 14);
		cout << "Data Input";
		repeat('*', 14);
		cout << endl;
		repeat(' ', 30);
		repeat('*', 38);
		cout << endl;
		repeat(' ', 30);
		cout << "Initial Investment Amount: " << endl;
		repeat(' ', 30);
		cout << "Monthly Deposit: " << endl;
		repeat(' ', 30);
		cout << "Annual Interest: " << endl;
		repeat(' ', 30);
		cout << "Number of years: " << endl;
		system("pause");
		system("cls");

		double investment, monthlyDeposit, interestRate;
		int years;

		repeat(' ', 30);
		repeat('*', 38);
		cout << endl;
		repeat(' ', 30);
		repeat('*', 14);
		cout << "Data Input";
		repeat('*', 14);
		cout << endl;
		repeat(' ', 30);
		repeat('*', 38);
		cout << endl;
		repeat(' ', 30);
		cout << "Initial Investment Amount: $";
		repeat(' ', 1), cin >> investment, validateInput();
		repeat(' ', 30), cout << "Monthly Deposit: $";
		repeat(' ', 1), cin >> monthlyDeposit, validateInput();
		repeat(' ', 30);
		cout << "Annual Interest: %";
		repeat(' ', 1), cin >> interestRate, validateInput();
		repeat(' ', 30);
		cout << "Number of years: ";
		repeat(' ', 1), cin >> years, validateInput();
		system("pause");
		cout << endl;



		SavingsAccount userSavings = SavingsAccount(investment, monthlyDeposit, interestRate, years);

		cout << endl;

		// Generate report without deposits
		userSavings.calcNoDep();
		cout << endl;

		// Generate report with monthly deposits

		if (monthlyDeposit > 0) {

			userSavings.calcWithDep();

		}

		// Prompt user with choice to continue

		string prompt = "Would you like to continue?: Y or N";
		string choice;
		cout << prompt;
		cin >> choice;
		if (choice == "Y" || choice == "y") {
			continue;
		}
		else if (choice == "N" || choice == "n") {
			break;
		}
		else {
			cout << "\n", repeat(' ',32), "You did not enter a valid input";
			system("pause");
			system("cls");
				
		}

	}
	return 0;
}