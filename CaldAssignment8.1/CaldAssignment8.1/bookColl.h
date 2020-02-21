/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+        Book Collection and File            +=================
=============+             Date:3/21/2015                 +=================
=============+============================================+=================
=============+=============Header files===================+=================
*/
//
// PreProcessor Directives
#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>


using namespace std;
//These are the characters that are used in both .cpp files that they just call from so that they know what is going on
char Menu();
void addbook(vector<string> &bookCollection, string book);
void display(vector<string> &bookCollection, vector<string>::iterator collectionIterator);
void removebook(vector<string> &bookCollection,string book);
void wrtietofile(vector<string> &bookCollection, string book,fstream& myFile, vector<string>::iterator collectionIterator);
