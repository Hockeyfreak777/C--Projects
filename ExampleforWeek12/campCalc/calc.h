/*
	Stephen Campbell
	Basic 5 function calculator with functions and pointers
	3/4/15
*/

#include <iostream>
#include <string>

using namespace std;

double getNumber(string prompt);
char getSign();
double doCalculation(double* num1, double* num2, char* calcSign);
void displayResults(double& num1, double& num2, double& answer, char& calcSign);

