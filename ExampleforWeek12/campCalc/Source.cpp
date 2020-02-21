/*
	Stephen Campbell
	Basic 5 function calculator with functions and pointers
	3/4/15
*/

#include <iostream>
#include "calc.h"


using namespace std;

int main()
{
	double userNum1=1, userNum2=1, answer=1;
	char userChoice ='x';
	char calcSign = 'x';

	cout << "\nWelcome to Mr. Campbell's simple calculator!!" << endl;
	cout << "\nYou will give a number, then a calculation type," << endl;
	cout << "Then the second number.  The answer will then be displayed." << endl << endl;

	userNum1 = getNumber("Please enter your first number.");
	calcSign = getSign();
	userNum2 = getNumber("Please enter your second number.");

	answer = doCalculation(&userNum1, &userNum2, &calcSign);

	displayResults(userNum1, userNum2, answer, calcSign);


	system("pause");
	return 0;
}