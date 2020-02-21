/*
=============+============================================+=================
=============+          Jersey Calderwood                 +=================
=============+        Body Mass Index Program             +=================
=============+             Date:1/18/2015                 +=================
=============+============================================+=================
*/

// PreProcessor Directives
#include <iostream>

using namespace std;


int main()
{
	double BMI, weight, height;
	char choice;
	
	cout << "Jersey Calderwood \n";
	cout << "Body Mass Index Program \n";
	cout << "Date:1 / 18 / 2015 \n" << endl;
	cout << "This Program will calculate your BMI" << endl;
	//cout << "(EXAMPLE) for 5 feet 9 inches you will enter --5 9";
	cout << "Please enter your weight in pounds" << endl;

	cin >> choice;

	if (choice == 'i')
	{
// Here I added the program to ask the user for input for height to inches
		cout << "Please enter your Height in Inches: ";
		cin >> height;
// Here I added the program to ask the user for input for weight in pounds
		cout << "Please enter your Weight in Pounds:";
		cin >> weight;
// Here is the equation I used to calculate Body Mass index by using weight divided by
		BMI = weight * 703 / pow(height, 2);
	}
	else
	{
// I also added the calculation of height in meters
		cout << "PLease enter your Height in Meters:";
		cin >> height;
// I also added the calculation of weight in kilograms
		cout << "Please enter your Weight in Kilograms:";
		cin >> weight;

		BMI = weight / pow(height, 2);
	}
	{
		cout << "Your BMI is: " << BMI << endl;
		system("pause");
		cout << "Thanks for using my Program\n";
		return 0;
// Above I added the total of the weight and height calculation and also I thanked them for using my program
		
	}
}