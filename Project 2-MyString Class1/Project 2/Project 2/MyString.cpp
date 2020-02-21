#include "MyString.h"
#include <cstring>
#include <memory>


//default constructor
MyString::MyString()
{
	//capacity
	this->_capacity = 16;

	//the pointer where it points
	this->_string = new char[_capacity + 1];
	//the pointer: what it points to
	//null char
	this->_string[0] = '\0';

	//length
	_length = 0;
}

//copy constructor
MyString::MyString(const MyString & original)
{
	//capacity 
	this->_capacity = original.CurrentCapacity();

	this->_string = new char[this->_capacity + 1];

	//the pointer: what it points to
	strcpy(_string, original._cstr());

	//length
	this->_length = original.Length();
}

////Takes an int argument
////initializes capacity to numChars chars
////initializes this MyString
MyString::MyString(int numChars)
{
	//_capacity
	this->_capacity = numChars;

	//length
	this->_length = 0;

	//_string: where it points
	this->_string = new char[this->_capacity + 1];

	//_string: what it points to
	_string[0] = '\0';
}

////parameterized constructors
////takes a c style string argument
////initializes capacity to greater of strlen(cString) or 16 chars
////initializes this MyString to cString
MyString::MyString(const char * aCString)
{
	//capacity
	this->_capacity = strlen(aCString);

	//the pointer: where it points
	this->_string = new char[this->_capacity + 1];

	//the pointer: what it points to
	strcpy(_string, aCString);

	//length
	this->_length = strlen(aCString);
}

// DESTRUCTOR
// dealocate dynamic storage
MyString::~MyString()
{
	delete[] this->_string;
}


// Assign
// Takes a MyString argument
// makes this MyString a copy of aMyString
void MyString::Assign(const MyString & aMyString)
{
	Assign(aMyString._cstr());
}

// Takes  a c style string argument
// makes this MyString contain the chars of aCString
void MyString::Assign(const char * const aCString)
{
	// change len and cap
	this->_length = strlen(aCString);
	this->_capacity = this->_length;

	// out with the old, in with the new!
	delete[] _string;
	_string = new char[_capacity + 1];
	strcpy(this->_string, aCString);
}

// Append
// Takes a MyString argument
// Appends chars to the end of this MyString
void MyString::Append(const MyString & aMyString)
{
	Append(aMyString._cstr());
}

// Takes  a c style string argument
// Appends chars to the end of this MyString
void MyString::Append(const char * aCString)
{
	// Increase Capacity
	int newCapacity = this->_length + strlen(aCString);	
	this->_capacity = newCapacity;

	// Add this string to new string
	char * newStr = new char[_capacity + 1];
	for (int i = 0; i < this->_length; i++)
	{
		newStr[i] = this->_string[i];
	}

	delete[] _string;
	this->_string = new char[_capacity + 1];

	// add appended string to new string
	for (int j = this->_length; j < this->_capacity; j++)
	{
		newStr[j] = aCString[j - this->_length];
	}
	newStr[this->_capacity] = '\0';

	this->_length = this->_capacity;

	// assign new string and new length
	for (int k = 0; k < this->_capacity + 1; k++)
	{
		this->_string[k] = newStr[k];
	}
}

// At
// Takes an int argument
// Returns a copy of the char at that index
// throws an exception if index is < 0 or >= _length
char MyString::At(int index) const
{
	// check to see if the user is dumbAF
	if (index < 0 || index >= this->_length)
		throw "Error: Index out of range.";
	return this->_string[index];
}

// Clear
// Makes this MyString empty
// does not change capacity;
void MyString::Clear()
{
	delete[] _string;
	this->_string = new char[_capacity + 1];
	this->_string[0] = '\0';
	this->_length = 0;

}

// Makes this MyString empty
// changes capacity to newCapacity
// throws an exception if newCapacity < 0

void MyString::Clear(int newCapacity)
{
	if (newCapacity < 0)
		throw "Error: Index out of range.";

	delete[] _string;
	this->_string = new char[newCapacity + 1];
	this->_string[0] = '\0';
	this->_length = 0;
	this->_capacity = newCapacity;
}



// Compare
// Takes a MyString argument
// Returns (zero) if the argument contains
//   the same string of chars as this MyString
// Returns (a positive int) if the argument is
//   alphabetically less than this MyString
// Returns (a negative int) if the argument is
//   alphabetically greater than this MyString

int MyString::Compare(const MyString & aMyString)
{
	return strcmp(this->_string, aMyString._string);
}


// CurrentCapacity
// Returns number of characters that this instance can hold
// without reallocating

int MyString::CurrentCapacity() const
{
	return this->_capacity;
}



// Equals
// Takes a MyString argument
// Returns (true) if the argument contains
// the same string of chars as this MyString,
// otherwise it returns (false).

bool MyString::Equals(const MyString & aMyString) const
{
	return this->Equals(aMyString._string);
}

// Takes a c style string argument
// Returns (true) if the argument contains
// the same string of chars as this MyString,
// otherwise it returns (false).

bool MyString::Equals(const char * const aCString) const
{
	if (this->_length != strlen(aCString))
		return false;

	for (int i = 0; i < this->_length; i++)
	{
		if (this->_string[i] != aCString[i])
			return false;
	}

	return true;
}



// Find
// Takes a myString argument
// Returns the index (int)
// where the argument MyString was found
// in this MyString. If it is not found, then returns -1.

int MyString::Find(const MyString & aMyString) const
{
	if (strstr(this->_string, aMyString._string))
	{
		char* beginningChar = &strstr(this->_string, aMyString._string)[0];

		for (int i = 0; i < this->_length; i++)
		{
			if (beginningChar == &this->_string[i])
				return i; 
		}
	}
	else
		return -1;
}



// Insert
// Takes two arguments
// An int – the index in this MyString
//   at which to insert the new chars
// A MyString containing the chars to be inserted

void MyString::Insert(const MyString & aMyString, int index)
{
	int newCapacity = this->_capacity + aMyString.CurrentCapacity();
	this->_capacity = newCapacity;

	char* newStr = new char[this->_capacity + 1];
	
	for (int i = 0; i < index; i++)
	{
		newStr[i] = this->_string[i];
	}
	newStr[index] = '\0';

	strcat(newStr, aMyString._cstr());
	
	for (int j = 0; j < _length - index; j++)
	{
		newStr[index + aMyString.Length() + j] = _string[index + j];
	}
	newStr[_capacity] = '\0';

	this->_length = this->_capacity;
	delete[] this->_string;
	this->_string = newStr;
}



// Length
// Returns the number (int) of chars in this MyString

int MyString::Length(void) const
{
	return this->_length;
}



// Replace
// Takes three arguments
// An int – the index of the char in thisMyString
//   to begin replacing at.
// An int – the number of chars to replace
// And a MyString containg the replacement string
// throws an exception if startIndex >= Length
// throws an exception if startIndex + numChars > Length()
// throws an exception if aMyString.Length() < numChars
void MyString::Replace(int startIndex, int numChars, const MyString & aMyString)
{
	if (startIndex >= _length)
	{
		throw "Error: Index out of range.";
	}
	else if (startIndex + numChars > _length)
	{
		throw "Error: Index out of range.";
	}
	else if (aMyString._length < numChars)
	{
		throw "Error: Index out of range.";
	}
	else
	{
		int tempIndex = startIndex;
		for (int i = 0; i < numChars; i++)
		{
			_string[tempIndex] = aMyString._cstr()[i];
			tempIndex++;
		}
	}
}



// Substr
// Takes two int arguments,
// An int for the starting index,
// An int for the number of chars to return.
// Returns a MyString with the requested sub-string
//   from the original MyString
// throws an exception if startIndex + numChars > Length()

MyString MyString::SubStr(int startIndex, int numChars) const
{
	try
	{
		if (startIndex + numChars > Length())
			throw "(from SubStr) startIndex + numChars cannot be > Length()";
		else
		{
			MyString newString(numChars + 1);
			for (int i = 0; i < numChars; i++)
			{
				newString._string[i] = this->_string[startIndex + i];
			}
			newString._string[numChars] = '\0';
			newString._length = strlen(newString._cstr());
			cout << newString << endl;
			return newString;
		}
	}
	catch (const char*e)
	{
		cout << "Exception Caught:\n" << e << endl;
		cout << "Returning empty MyString\n";
		return MyString();
	}
}

// OPERATORS



// = (assignment - takes a MyString or a c style string)
MyString MyString::operator= (const MyString & aMyString)

{

	Assign(aMyString._string);

	return *this;
}



MyString MyString::operator= (const char * const aCString)

{

	Assign(aCString);

	return *this;

}



MyString MyString::operator+ (const MyString & aMyString)

{

	MyString newString = *this;

	newString.Append(aMyString);

	return newString;

}



MyString MyString::operator+= (const MyString & aMyString)

{

	Append(aMyString);

	return *this;

}



char & MyString::operator[] (int index) const

{

	//throw exception if index is < 0 or >= _length

	char requestedChar = At(index);

	return requestedChar;

}



bool MyString::operator> (const MyString & aMyString)

{

	return Compare(aMyString) > 0;

}



bool MyString::operator< (const MyString & aMyString)

{

	return Compare(aMyString) < 0;

}



bool MyString::operator>= (const MyString & aMyString)

{

	return (Compare(aMyString) > 0 || Compare(aMyString) == 0);

}



bool MyString::operator<= (const MyString & aMyString)

{

	return (Compare(aMyString) < 0 || Compare(aMyString) == 0);

}



bool MyString::operator== (const MyString & aMyString)

{

	return Compare(aMyString) == 0;

}



bool MyString::operator!= (const MyString & aMyString)

{

	return Compare(aMyString) != 0;

}



const char* MyString::_cstr() const

{

	return _string;

}



ostream & operator<< (ostream & os, const MyString & aMyString)

{

	return os << aMyString._string;

}



istream & operator>> (istream & is, MyString & aMyString)

{

	char temp[50];

	is >> temp;

	aMyString.Assign(temp);

	return is;

}
