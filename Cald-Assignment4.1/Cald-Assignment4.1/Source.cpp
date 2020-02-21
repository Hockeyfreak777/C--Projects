/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+          Array Assignment 4.1              +=================
=============+             Date:2/8/2015                  +=================
=============+============================================+=================
*/

// PreProcessor Directives
#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>
#include<iomanip>

using namespace std;

//Where the main function starts
int main()
{
	double myNum1[5], myNum2[5], myNum[5], userNum = 1;
	char willcontinue = ' ';
	string option = " ";
	//My name and when the project was completed along with the name of the program for a added touch
	cout << "=============+============================================+=================\n";
	cout << "=============+           Jersey Calderwood                +=================\n";
	cout << "=============+           Array Assignment 4.1             +=================\n";
	cout << "=============+           Date:2 / 8 / 2015                +=================\n";
	cout << "=============+============================================+=================\n";
	//start of the do loop
	do
	{
		cout << "Input your own numbers(input).";
		cin >> option;
		cin.ignore();
		if (option == "input") // input for the user
		{
			for (int i = 0; i < 5; i++)
			{
				cout << endl << "Enter a number: ";
				cin >> userNum;
				cin.ignore();
				myNum1[i] = userNum;
				cout << endl << "Enter a number: ";
				cin >> userNum;
				cin.ignore;
				myNum2[i] = userNum;
				myNum[i] = myNum1[i] + myNum2[i];
				cout << endl << myNum1[i] << "+" << myNum2[i] << "=" << myNum[i] << endl;
			}
			cout << "myNum=<" << myNum[0] << ", " << myNum[1] << ", " << myNum[2] << ", " << myNum[3] << ", " << myNum[4] << "> " << endl;
		}// All of the details to make the arrays
		//loop of program
		cout << endl << "Would you like to continue? Yes(Y) or No(N)  ?";
		cin >> willcontinue;
		cin.ignore();
	} while willcontinue == 'y');


	cout << endl << "Thank you for using this program." << endl;
	cout << endl << "Press any key to exit.";
	return 0;
}