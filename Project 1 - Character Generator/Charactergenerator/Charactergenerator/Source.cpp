/*
Jersey Calderwood
6/5/2015
Project 1
Character Generator
*/

#include <iostream>
#include<string>
#include "Gods.h"

int Gods::totalGods;
int AttackDamageCarry::totalAttackDamageCarry;
int Guardian::totalGuardian;

int main()
{
	char userInput = '1';
	char runAgain = 'Y';

	//Header
	cout << "========================================================================\n";
	cout << "====================           Project 1            ====================\n";
	cout << "====================        Jersey Calderwood       ====================\n";
	cout << "====================          Date: 6/7/15          ====================\n";
	cout << "========================================================================\n";

	cout << "This program will allows you to create game characters.\n";
	cout << "You will be able create a character class and from that create Attack Damage Carry and Support.\n";

	do
	{
		userInput = userMenu();  //Makes userInput equal the input that the user enters.


	 if (userInput == '1')  //If the user inputs a 1
		{
		 AttackDamageCarry myAttackDamageCarry;
		 myAttackDamageCarry.SetAttackSpeedItem("");
		 myAttackDamageCarry.AttackDamageCarryStats();
		}

		else if (userInput == '2')  //If the user inputs a 2
		{
			//It displays the amount of gods that have been created
			cout << "\nYou have made " << Gods::totalGods << " God(s)";
			cout << "\nYou have made " << AttackDamageCarry::totalAttackDamageCarry << " ADC(s).";
			cout << "\nYou have made " << Guardian::totalGuardian << " Guardian(s).";
		}

		else  //Else if the user inputs an incorrect value it asks for a correct one which would bring this up and make it void
		{
			cout << "Incorrect Input. Please enter the correct value.";
			cin >> userInput;
		}

		if (runAgain == 'Y' || runAgain == 'y')
		{
			cout << "\nWould you like to run the program again? (Y/N) ";  //Asks user if they wish to continue
			cin >> runAgain;
		}

	} while (runAgain == 'y' || runAgain == 'Y');  //If they press y the program loops again

	cout << "\nThanks for using my program.\n";  //Thanks user for using the program so that the user can remember the programmers generocity

	system("pause");  //Pauses
	return(0);  //Exits the program
}