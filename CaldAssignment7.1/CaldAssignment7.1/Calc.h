/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+            5 Function Calculator           +=================
=============+             Date:3/ 7/2015                 +=================
=============+============================================+=================
*/

//Pre Prosessor so they happen before
#include <iostream>
#include <string>

using namespace std;

//they are in the header
//simple assigning characters and using doulbe to make sure the user only puts in numbers
double getNumber(string prompt);
char getSign();
//double for the calculations so the answers can be in decimals 
double doCalculation(double* num1, double* num2, char* calcSign);
//to make sure the results are dereferenced
void displayResults(double& num1, double& num2, double& answer, char& calcSign);
//whole .h file is just making sure that everything is being shown