/*
=============+===============================================+=================
=============+          Jersey Calderwood                    +=================
=============+            Tip Calculator w/ Functions        +=================
=============+Additional source file for function definitions+=================
=============+             Date:2/15/2015                    +=================
=============+===============================================+=================
*/

#include <iostream>
#include<string>
#include "calculator.h"

using namespace std;
// Function Definitions
int mains()
{
	cout << "Enter your Bill: ";
	cin >> bill;
	while (bill < 0)
	{
		cout << "You can not have a bill with less than 1 cent. Enter your bill again: ";
		cin >> bill;
	}
	//This just makes sure that you do not enter anything less than 1 cent
	cout << "Enter the percent you want to tip with: ";
	cin >> tip;
	while (tip < 0)
	{
		cout << "You can not give a negative tip percent. Enter tip percent again: ";
		cin >> tip;
	}
	//This makes sure that you do not enter a negative tip because we need to give the waiter a br
	cout << endl;
	cout << "Your tip is: " << bill*(tip / 100) << "$ " << endl;
	cout << "Your total Price is: " << bill + (bill*tip / 100) << "$ " << endl;
	if (again == 'Y')
	{
		cout << "Do you want to run this Program again? (Y/N)? " << endl;
		cin >> again;
	}
	else if (again == 'N')
	{
		cout << endl;
	}
	cout << endl;
}