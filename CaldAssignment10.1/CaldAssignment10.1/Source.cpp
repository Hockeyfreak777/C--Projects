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

using namespace std;

int main()
{
	vector<Book> bookCollection;
	vector<string>::iterator collectionIterator;
	vector<string> displayCollection;

	Book myBook;
	myBook.setinfo();

	bookCollection.push_back(myBook);

	system("pause");
	return(0);
}