/*
=============+============================================+=================
=============+           Jersey Calderwood                +=================
=============+             Inheritance                    +=================
=============+             Date:4/12/2015                 +=================
=============+============================================+=================
*/

#include <iostream>
#include <string>
#include "Computer.h"


using namespace std;

Computer:: Computer()
{
	cout << "\nInside the Computer constructor.\n";
}

// This function is called by the circle class to set the circumference based on the perimeter.
string Computer::m_GetLaptop()
{
	return m_Laptop;
}

string Computer::m_GetDesktop()
{
	return m_Desktop;
}
string Computer::m_GetTablet()
{
	return m_Tablet;
}


Laptop::Laptop()   //  Constructor
{
	cout << "\nInside the Laptop constructor.\n";
	m_SetType('L');  // sets the Shape Type variable from "Computer"
}

void Laptop::m_CPU()  // prompt user to enter a value for the CPU
{
	cout << "What is the Type of the CPU that you are using in your Laptop?  ";
	cin >> m_CPU;
}

void Laptop::m_GPU()  // prompt user to enter a value for the GPU
{
	cout << "What is the GPU that your Laptop is holding?";
	cin >> m_GPU;
}

void Laptop::m_ScreenSize()  // prompt user to enter a value for the height of the triangle
{
	cout << "What is the size of your Laptop Screen?";
	cin >> m_ScreenSize;
}
Desktop::Desktop()
{
	cout << "\nInside the Desktop constructor.\n";
	m_SetType('D');  // sets the Shape Type variable from "Computer"
}

void Desktop::m_GPU() // takes the argument in and displays whatever the user types in
{
	cout << "What is the GPU model in your Desktop?  ";
	cin >> m_GPU;
}

void Desktop::m_CPU()  // takes the argument in and displays whatever the user types in
{
	cout << "What is the CPU model in your Desktop?  ";
	cin >> m_CPU;
}

void Desktop::m_PowerSupply()  // takes the argument in and displays whatever the user types in
{
	cout << "What is your Desktop's Power Supply Voltage?";
	cin >> m_PowerSupply;
}

Tablet::Tablet()  // takes the argument in and displays whatever the user types in
{
	cout << "\nInside the MyCircle constructor.\n";
	m_SetType('T');
}

void Tablet::m_ScreenSize()  // takes the argument in and displays whatever the user types in
{
	cout << "What is the Screen Size of your Tablet?";
	cin >> m_ScreenSize;
}

void Tablet::m_CPU()  // takes the argument in and displays whatever the user types in
{
	cout << "What is the CPU of your Tablet?";
	cin >> m_CPU;
}

void Tablet::m_GPU()  // takes the argument in and displays whatever the user types in
{
	cout << "What is the GPU of your Tablet?";
	cin >> m_GPU;
}

