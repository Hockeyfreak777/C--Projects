#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	ifstream inFile;
	ofstream outFile;
	int hours;
	double rate, gross;
	inFile.open("inFile.txt");

	if (inFile.fail())
	{
		cout << "Error opening input file";
		exit(1);
	}

	outFile.open("output.txt");
	
	if (outFile.fail())
	{
		cout << "Error opening output file";
		exit(1);
	}

	inFile >> hours >> rate;
	cin >> hours >> rate;
	while (!inFile.eof())
	{
		gross = hours * rate;
		outFile << hours << rate << gross << endl;
		cout << hours << rate << gross << endl;
		inFile >> hours >> rate;
	}

	system("Pause");
	return;
}