/*
	Stephen Campbell
	Basic 5 function calculator with functions and pointers
	3/4/15
*/

#include <iostream>
#include <string>

using namespace std;

double getNumber(string prompt)
{
	double number;
	cout << endl << prompt << "  ";
	cin >> number;
	return number;
}

char getSign()
{
	char sign;
	cout << endl << "Please enter the type of operation you would like to perform:" << endl;
	cout << "Addition (+) / Subtraction (-) / Multiplication (*) / Division (/):  ";
	cin >> sign;
	return sign;
}

double doCalculation(double* num1, double* num2, char* calcSign)
{
	double answer;
	bool flag = true;
	while(flag)
	{
		flag = false;
		switch(*calcSign)
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
			while(*num2 == 0)
			{
				cout << "CANNOT DIVIDE BY ZERO!!!\n";
				cout << "Please try again!\n";
				*num2 = getNumber("Please enter a different second number.");
			}
			answer = *num1 / *num2;
			break;
		default:
			cout << "Incorrect symbol entered... please try again...\n";
			*calcSign = getSign();
			flag = true;
		}
	}
	return answer;
}


void displayResults(double& num1, double& num2, double& answer, char& calcSign)
{
	cout << endl << num1 << " " << calcSign << " " << num2 << " = " << answer << endl << endl;

}

