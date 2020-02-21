/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+        Temperature Conversion program      +=================
=============+             Date:1/24/2015                 +=================
=============+============================================+=================
*/

// PreProcessor Directives
#include <iostream>

using namespace std;

//Where the main function starts
int main()
{
//My name and when the project was completed along with the name of the program for a added touch
	cout << "=============+============================================+=================\n";
	cout << "=============+             Jersey Calderwood              +=================\n";
	cout << "=============+      Temperature Conversion program        +=================\n";
	cout << "=============+           Date:2 / 1 / 2015               +=================\n";
	cout << "=============+============================================+=================\n";
//The main functions that I am going to use along the way of my program for fahrenheit and celsius
	int ftemp;
	int ctemp;
	int select = -1;
// Making a while loop so that the user can type as many numbers to see what that is in the opposite degree
	while (select == -1)
	{
		cout << "Please select from the following :" << endl;
		cout << "1. Fahrenheit to Celsius" << endl;
		cout << "2. Celsius to Fahrenheit" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter 1 or 2. (If you would like to exit press 0) ";
		cin >> select;
		if (select == 1)
//This is the User interface so that the user can do what they want to do.(Prints out words for the user)
		{
			cout << "Enter temperature in Fahrenheit to convert to degrees Celsius: ";
			cin >> ftemp;
			ctemp = (ftemp - 32) * 5 / 9;
			cout << "Equivalent in Celsius is: " << ctemp << endl;
		}
//Equation for fahrenheit to Celsius so that the program knows what to do
		else if (select == 2)
		{
			cout << "Enter temerature in Celsius to convert to degrees Farenheit: ";
			cin >> ctemp;
			ftemp = ctemp * 9 / 5 + 32;
			cout << "Equivalent in Fahrenheit is: " << ftemp << endl;
//Equation for Celsius to fahrenheit so that the program knows what to do
		}
		else if (select == 0)
			exit(0);
// A way for the program to stop looping
		else
			cout << "Valid options 1 or 2." << endl;
		select = -1;
// The only two options that convert anything 0 just makes the program stop
	}
	system("Pause");
// The system stops to let you push a key before it closes so you get to see what the program just did
	return 0;
}