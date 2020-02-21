#include "MyString.h"
#include <cstring>
// default constructor

MyString::MyString()
{
	// capacity
	this->_capacity = 16;

	// the pointer: where it points
	this->_string = new char[this->_capacity + 1];
	// the pointer: what it points to. 
	// null char
	_string[0] = '\0';

	// length
	this->_length = 0;
}
MyString::MyString(const MyString & original)
{
	// capacity
	this->_capacity = original._length;

	// the pointer: where it points
	this->_string = new char[this->_capacity + 1];
	// the pointer: what it points to
	strcpy(_string, original._string);

	// length
	this->_length = original._length;
}
//// takes an int argument
//// initializes capacity to numChars chars
//// initializes this MyString to an empty MyString

MyString::MyString(int numChars)
{
	// _capacity
	_capacity = numChars;

	// _string : where it points
	_string = new char[_capacity + 1];
	// _string : what it points to
	_string[0] = '\0';

	// _length
	_length = 0;
}
//// parameterized constructors
//// takes a c style string argument
//// initializes capacity to greater of strlen(cString) or 16 chars
//// initializes this MyString to cString
MyString::MyString(const char * aCString)
{
	// cpapcity
	_capacity = strlen(aCString);

	// the pointer: where it points
	_string = new char[this->_capacity + 1];
	// the pointer: what it points to
	strcpy(_string, aCString);

	// length
	_length = _capacity;
}
// DESTRUCTOR
// dealocate dynamic storage
MyString::~MyString()
{
	delete[] this->_string;
}
//
// Takes  a c style string argument 
// makes this MyString contain the chars of aCString
void MyString::Assign(const char * const aCString)
{
	if (_string == aCString)
		return;

	int lengthOfACString = strlen(aCString);

	// cpapcity
	if (lengthOfACString > _capacity)
	{
		_capacity = lengthOfACString;
		delete[] _string;
		// the pointer: where it points
		_string = new char[_capacity + 1];
	}

	// the pointer: what it points to
	strcpy(_string, aCString);

	// length
	_length = lengthOfACString;
}
