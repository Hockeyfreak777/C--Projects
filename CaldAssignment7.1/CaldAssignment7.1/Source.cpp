/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+            5 Function Calculator           +=================
=============+             Date:3/ 7/2015                 +=================
=============+============================================+=================
*/


//Pre Prosessor so they happen before
#include <iostream> //allows me to use cout and cin
#include "Calc.h" //this tells this cpp file to include the .h file 


using namespace std;
//the main function were in most cases everything happens
int main()
{
	//My name and when the project was completed along with the name of the program for a added touch to the beginning of the program
	cout << "=============+============================================+=================\n";
	cout << "=============+           Jersey Calderwood                +=================\n";
	cout << "=============+           Tip Calculator w/ Functions      +=================\n";
	cout << "=============+           Date:2 / 15 / 2015               +=================\n";
	cout << "=============+============================================+=================\n";
	//allows the variables userNum 1,2 and answer to be set at a default of 1 and also for them to be able
	//to have more than just whole numbers but decimals with the double
	double userNum1 = 1, userNum2 = 1, answer = 1;
	//just sets the two characters to a default of x for later use
	char userChoice = 'x';
	char calcSign = 'x';
	//beginning of the program and also what the user sees on the program
	cout << "\n=========********************************************======================" << endl;
	cout << "==========Welcome to Jersey's 5 Function Calculator!!======================" << endl;
	cout << "==========You will give a number, then a calculation type,=================" << endl;
	cout << "======Then the second number.  The answer will then be displayed===========" << endl;
	cout << "=========********************************************************==========" << endl;
	//making sure the program knows what to store when the user inputs
	userNum1 = getNumber("Please enter your First number:");
	calcSign = getSign();
	userNum2 = getNumber("Please enter your Second number:");
	//shows the answer that the user inputed
	answer = doCalculation(&userNum1, &userNum2, &calcSign);
	//displays the result
	displayResults(userNum1, userNum2, answer, calcSign);

	//thanks the user and pauses the program so that the user can look at the program to see the program did
	system("pause");
	cout << "Thanks for using My Program! =D" << endl;
	return 0;
}