/*
 * Calculator.cpp
 *
 *  Date: 7/7/2022
 *  Author: Jesse Martin
 */

#include <iostream>

using namespace std;
// changed main from void to int, added return statement
int main() {
	char statement[100];// here, assuming that the calculator should be able to take in any range of numbers
	double numberOne, numberTwo; /* Changed int op1, op2 to variable type double, as with integer division the 
								 remaining value would be truncated, also changed name to "number" for readbility
								 */
	char operation;
	char answer = 'Y';
	
	while ((answer == 'y') || (answer == 'Y')) {
		cout << "Enter expression" << endl;
		cin >> numberOne >> operation >> numberTwo; // changed order to op1 >> operation >> op2
		
		// First and second conditional expressions ended with a semicolon, no {} used
		if (operation == '+') { // Char variable type denoted by double quotes, changed to single quotes ("" used for String variable
			cout << numberOne << " + " << numberTwo << " = " << numberOne + numberTwo << endl; // >> used instead of << for op1 + op2
		}
		else if (operation == '-') {
			cout << numberOne << " - " << numberTwo << " = " << numberOne - numberTwo << endl; // >> again used instead of << for cout << op1
		}
		else if (operation == '*') { //no brackets here, either
			cout << numberOne << " * " << numberTwo << " = " << numberOne * numberTwo << endl; //no semicolon ending statement, wrong symbol output
		}
		else if (operation == '/') { //again, no brackets 
			cout << numberOne << " / " << numberTwo << " = " << numberOne / numberTwo << endl;//  Multiplication symbol outputted instead of division
		}


		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
		// added if else to break if answer is 'N' or 'n' as per rubric
		if ((answer == 'N') || (answer == 'n')) {
			cout << "Program finished.";
			break;
		}
		else { 
			continue;
		}

		
	}
	return 0;
} 

