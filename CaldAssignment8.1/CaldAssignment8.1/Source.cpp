/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+        Book Collection and File            +=================
=============+             Date:3/21/2015                 +=================
=============+============================================+=================
*/

// PreProcessor Directives
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include "bookColl.h"


using namespace std;

//Where the main function starts
int main()
{
	//Created a string vector call bookcollection which I will store book titles in to later display
	vector<string> bookCollection;
	vector<string>::iterator collectionIterator;
	vector<string> displayCollection;
	//String vectors that I have to store and display the book titles
	char Input;
	//use this to wrap the program in a do loop so that when the user types y if they would like to continue it runs the program again
	char Repeat= 'Y';
	string book;
	fstream myFile;
	myFile.open("Collection.txt");
	//My name and when the project was completed along with the name of the program for a added touch
	cout << "=============+============================================+=================\n";
	cout << "=============+           Jersey Calderwood                +=================\n";
	cout << "=============+           Book Collection and File         +=================\n";
	cout << "=============+           Date:3 / 21 / 2015               +=================\n";
	cout << "=============+============================================+=================\n";

	cout << "Welcome to my Book Collection Program.\n";

	do
	{
		//Input one which just displays the menu
		Input = Menu();
		if (Input == '1')
		{
		//This addbook is from the other .cpp file that just displays the menu
			addbook(bookCollection, book);
		}
		else if (Input == '2')
		{
		//this display is from the other .ccp file that just displays the book collection from the storeage
			display(bookCollection, collectionIterator);
		}
		else if (Input == '3')
		{
		//removebook is it just removes a book from the collection and each of these has the vector bookcollection because they are using the titles that the user stores
			removebook(bookCollection, book);
		}
		else if (Input == '4')
		{
		//takes the books that the user wrote and puts the titles in a external txt file
			wrtietofile(bookCollection,book, myFile,collectionIterator);
		}
		else
		{
		//just makes it so that the user types the right things
			cout << "Incorrect Input. Please enter the correct value";
			cin >> Repeat;
		}
	//this is the loop of the program
		cout << "Would you like to Continue(Y,N) ";
		cin >> Repeat;
	} while (Repeat == 'y' || Repeat == 'Y');

	cout << "Thanks you for using this Program! " << endl;
	// The system stops to let you push a key before it closes so you get to see what the program just did
	system("Pause");
	return 0;
}