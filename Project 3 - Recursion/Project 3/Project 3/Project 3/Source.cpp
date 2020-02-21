#include <algorithm>
#include <array>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

//Display array elements from index low though index high
template < typename T ,size_t size >

void displayElements(const array< T, size > &items, size_t low, size_t high)
{
	for (size_t i = 0; i < items.size() && i < low; i++)
		cout << "   "; //display spaces for alignment

	for (size_t i = low; i < items.size() && i <= high; i++)
		cout << items[i] << " ";//display element

	cout << endl;
}//end function display Elements

//perform a binary search on the data
template < typename T, size_t size >
int binarySearch(const array < T, size > &items, const T& key, int startindex, int endindex)
{
	int middle = (startindex + endindex +1) / 2; //middle element
	int location = -1; //key's index; -1 if not found

	//display remaining elements of array to be searched
	displayElements(items, startindex, endindex);

	//output spaces for alignment
	
	if (endindex >= startindex)
	{
		for (int i = 0; i < middle; ++i)
			cout << "   ";

		cout << " * " << endl; //indicate current middle
		binarySearch(size, key, startindex, endindex)
		{
			//if the elements is found at the middle
			if (key == items[middle])
				return location = middle; //location is the current middle
			else if (key < items[middle]) //middle is to high
				return binarySearch(items, key, startindex, endindex - 1; //eliminate the higher half
			else //indicate elements is too low
				return binarySearch(items, key, startindex, endindex + 1; //eliminate the lower half
			return -1;
		}
	}
	return location; //return location of key
}// end function binary search

int main()
{
	
	// use the default random number generation engine to produce
	// uniformly distributed pseudorandom int values from 10 to 99
	default_random_engine engine(static_cast<unsigned int> (time(nullptr)));
	uniform_int_distribution<unsigned int> randomInt(10, 99);


	const size_t arraySize = 15; // size of array
	array <int, arraySize> arrayToSearch; // create array

	int Start = 0;
	int End = arrayToSearch.size();
	//fill arraytosearch's values
	for (int &item : arrayToSearch)
		item = randomInt(engine);

	sort(arrayToSearch.begin(), arrayToSearch.end()); //sort the array

	//display arrayToSearch's values
	displayElements(arrayToSearch, 0, arrayToSearch.size() - 1);

	//get input from user
	cout << "\nPlease enter an integer value (-1 to quit): ";
	int searchKey; // value to locate
	cin >> searchKey;
	cout << endl;


	//repeatedly input an integer; -1 terminates the program
	while (searchKey != -1)
	{
		//use binary search to try to find integer
		int position = binarySearch(arrayToSearch, searchKey,startindex, endindex);

		//return value of -1 indicated integer was not found
		if (position == -1)
			cout << "The integer " << searchKey << " was not found.\n";
		else
			cout << "The integer " << searchKey << " was found in postion " << position << ".\n";

		// get input from user
		cout << "\n\nPlease enter an integer value (-1 to quit): ";
		cin >> searchKey; // read an int from user
		cout << endl;
	}//end of while

	system("pause");
	return 0;



}// end of main