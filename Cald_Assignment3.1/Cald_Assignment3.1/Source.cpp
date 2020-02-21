/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+            Tip Calculator                  +=================
=============+             Date:2/4/2015                  +=================
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
	cout << "=============+           Jersey Calderwood                +=================\n";
	cout << "=============+           Tip Calculator                   +=================\n";
	cout << "=============+           Date:2 / 4 / 2015                +=================\n";
	cout << "=============+============================================+=================\n";
	double bill, tip;
	char again = 'Y';
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
	cout << "Thanks you for using this Program! " << endl;
	// The system stops to let you push a key before it closes so you get to see what the program just did
	return 0;
}