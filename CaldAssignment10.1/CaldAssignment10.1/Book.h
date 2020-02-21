/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+   Book Collection and File using classes   +=================
=============+             Date:4/4/2015                  +=================
=============+============================================+=================
*/
#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Book
{
public:
	Book();  // default constructor
	Book(string name, string author, string cpyrightDate); // constructor with paramaters
	~Book();
	//member functions
	void setinfo(); // setter
	// getters
	string m_getTitle();
	string m_getAuthor();
	string m_getCopyright();

private:
	//data members
	string m_bookTitle;
	string m_author;
	string m_copyright;
};
//These are the characters that are used in both .cpp files that they just call from so that they know what is going on
char Menu();
void addbook(vector<string> &bookCollection, string book);
void display(vector<string> &bookCollection, vector<string>::iterator collectionIterator);
void removebook(vector<string> &bookCollection, string book);
void wrtietofile(vector<string> &bookCollection, string book, fstream& myFile, vector<string>::iterator collectionIterator);


