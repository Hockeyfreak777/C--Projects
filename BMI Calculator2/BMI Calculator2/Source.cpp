/*
2/15/15
Bmi Calculator

*/
#include<iostream>

using namespace std;

int main()
{
	double userWeight = 1.0f;
	double userHeight = 1.0f;
	double bmi = 1.0f;
	

	cout << endl << "Welcome to the BMI Calculator" << endl;
	cout << "You will need to enter your weight in pounds, " << endl;
	cout << "and your height in inches.(5'7\" = 6'7\")." << endl;

	cout << "Please enter your Weight in Pounds: ";
	cin >> userWeight;

	cout << endl << "Please enter your Height in inches: ";
	cin >> userHeight;

	userWeight = userWeight*0.453592;
	userHeight = userHeight*0.0254;
	bmi = userWeight / (userHeight*userHeight);

	cout << endl << endl << "With a Weight of " << userWeight << "kg and a height of " << userHeight << "m....." << endl;
	cout << "Your Bodymass index is -" << bmi << endl << endl;

	system("Pause"); // Pauses the output
	return 0; //Send int/ complete program
}