/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+   Book Collection and File using classes   +=================
=============+             Date:4/4/2015                  +=================
=============+============================================+=================
*/
#include <iostream>
#include <vector>
#include <string>
#include "Book.h"
#include <fstream>

using namespace std;

	Book::Book()//constructor
	{
		cout << "\nBook constructor\n";
	}


	Book::Book(string name, string author, string cpyrightDate)//constructor that takes in arguments
	{
		this->m_bookTitle = name;
		this->m_author = author;
		this->m_copyright = cpyrightDate;
		cout << endl << this->m_bookTitle + ", " + this->m_author + ", " + this->m_copyright << endl;
	}

	void Book::setinfo()
	{
		cout << "What is the name of the book- ";
		getline(cin, this->m_bookTitle);

		cout << "\nWho is the author of the book- ";
		getline(cin, this->m_author);

		cout << "\nWhat is the copyright date of the book- ";
		getline(cin, this->m_copyright);
	}

	Book::~Book()//deconstructor
	{
	}

	string Book::m_getTitle()
	{
		return m_bookTitle;
	}

	string Book::m_getAuthor()
	{
		return m_author;
	}

	string Book::m_getCopyright()
	{
		return m_copyright;
	}
	char Menu()
	{
		//The menu which has a 1-4 options which take you to each of the characters below depending on which number you type in
		char Value;
		cout << "\n 1.Add a Book to the Collection.\n 2.Display the books currently in the Collection.\n 3.Remove the book from the collection.\n 4.Stop adding books and store the data in an external file.\n";
		cout << "Please Select one of the following numbers(1/2/3/4)";
		cin >> Value;
		return Value;
	}
	void addbook(vector<Book> &bookCollection, string book)
	{
		//This is to add a book to the list or collection
		cout << "Enter the Title of the Book: " << endl;
		cin.ignore();//used because it lets the getline work so that it does not just skip over the getline function
		getline(cin, book);
		bookCollection.push_back(book);
	}
	void display(vector<Book> &bookCollection, string book, vector<string>::iterator collectionIterator)
	{
		//for loop which just refrences the iterator
		cout << "The Books in the Collection are: \n";
		for (collectionIterator = bookCollection.begin(); collectionIterator != bookCollection.end(); collectionIterator++)
		{
			cout << *collectionIterator << endl;
		}
	}
	void removebook(vector<Book> &bookCollection, string book)
	{
		//removes a book from the collection by useing a for loop and instantiating
		cout << "Please enter the Book that you would like to Remove from the List" << endl;
		cin.ignore();
		getline(cin, book);

		int toRemove = -1;
		for (int i = 0; i < bookCollection.size(); i++)
		{
			if (bookCollection[i] == book)
			{
				toRemove = i;
			}
		}
		if (toRemove >= 0)
		{
			bookCollection.erase(bookCollection.begin() + toRemove);
		}
		else
		{
			//fail safe so that if they do not do this correctly they just get put here
			cout << "Sorry, Title not Found" << endl;
		}
	}
	void wrtietofile(vector<Book> &bookCollection, string book, fstream& myFile, vector<string>::iterator collectionIterator)
	{
		//Function to write the book collection to a external txt file
		sort(bookCollection.begin(), bookCollection.end());
		myFile.open("Collection.txt", ios::out | ios::trunc);
		cout << "The Books in your Collection are: \n";
		for (collectionIterator = bookCollection.begin(); collectionIterator != bookCollection.end(); collectionIterator++)
		{
			myFile << *collectionIterator << endl;
		}
		myFile.close();//prevents memory leaks

		myFile.open("Collection.txt");
		if (myFile.is_open())
		{
			while (getline(myFile, book))
			{
				cout << book << endl;
			}
			myFile.close();//another example of why you need to close your txt files otherwise you get memory leaks
		}
	}
