/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+            5 Function Calculator           +=================
=============+             Date:3/ 7/2015                 +=================
=============+============================================+=================
*/


#include <iostream>
#include <string>


using namespace std;

//this file is where all the math and "Magic" happens
//this is the getNumber variable which just saves the number that the user inputs
double getNumber(string prompt)
{
	double number;
	cout << endl << prompt << "  ";
	cin >> number;
	return number;
}
//this getSign adds a operation to the table and returns it
char getSign()
{
	char sign;
	cout << endl << "Please enter the type of operation you would like to perform:" << endl;
	cout << "Addition (+) / Subtraction (-) / Multiplication (*) / Division (/):  ";
	cin >> sign;
	return sign;
}
//this takes the information from the two previous functions and does the math
double doCalculation(double* num1, double* num2, char* calcSign)
//takes the char from calc.h and refrences them

{
	double answer;
	bool flag = true;
	while (flag)
	{
		flag = false;
		switch (*calcSign)
		{
		case '+':
			answer = *num1 + *num2;
			break;
		case '-':
			answer = *num1 - *num2;
			break;
		case '*':
			answer = *num1 * *num2;
			break;
		case '/':
			while (*num2 == 0)
			//above: the while loop is the math part making sure the program knows what to do with all the numbers and operations
			//below: makes sure the user does not divide by zero because you cannot do that
			{
				cout << "CANNOT DIVIDE BY ZERO!!!\n";
				cout << "Please try again!\n";
				*num2 = getNumber("Please enter a different Second number.");
			}
			//asks the user again because the user did not understand that you cannot divide by zero
			//refrences num2 and then just calls the getNumber function where it will replace whatever you enter from what you
			//entered last time
			answer = *num1 / *num2;
			break;
			//Above: displays the answer and the breaks out of the while loop
		default:
			cout << "Incorrect symbol entered... please try again...\n";
			*calcSign = getSign();
			flag = true;
		}
		//if you try to  enter anything but the operations above then you get an error where it has you choose a operation again
	}
	return answer;
}
//all of these measures makes sure that a user has a smooth experience with the program

//displays the results that the program has collected and derefrences the data
void displayResults(double& num1, double& num2, double& answer, char& calcSign)
//then displays that data in a very easy to read user interface
{
	cout << endl << num1 << " " << calcSign << " " << num2 << " = " << answer << endl << endl;

}