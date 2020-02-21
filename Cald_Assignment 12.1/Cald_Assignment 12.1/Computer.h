/*
=============+============================================+=================
=============+           Jersey Calderwood                +=================
=============+             Inheritance                    +=================
=============+             Date:4/12/2015                 +=================
=============+============================================+=================
*/

#include <iostream>
#include <string>

using namespace std;

class Computer
{
public:
	Computer(); // main class with each child underneath 
	void m_SetLaptop(string Laptop);
	char m_GetLaptop();
	void m_SetDesktop(string Desktop);
	char m_GetDesktop();
	void m_GetTablet(string Tablet);
	char m_SetTablet();

protected:
	int m_Prot_Val;

private:
	char m_Laptop; // Laptop,Desktop, Tablet
	string m_Desktop;
	string m_Tablet;
};


class Laptop : public Computer
{
public:
	Laptop();//  default constructor
	void m_SetCPU();  //set function for the CPU
	void m_SetGPU();  //set function for the GPU     
	void m_SetScreenSize();  //set function for the Screen size
	string m_GetCPU();  //get function to return the CPU
	string m_GetGPU();  //get function to return the GPU
	string m_GetScreenSize();  //get function for the Screen size
	void m_SetType();
	void m_GetType();
private:
	string m_CPU;  // data member for the CPU of the laptop
	string m_GPU;  // data member for the GPU of the laptop
	string m_ScreenSize;  // data member for the screen size of the laptop	
};

class Desktop : public Computer
{
public:
	Desktop();  //class name/ default constructor
	void m_SetGPU();  //set function for the GPU
	void m_SetCPU();  //set function for the CPU
	void m_SetPowerSupply();  //set the function for the Power Supply
	string m_GetGPU();  //get function for the GPU
	string m_GetCPU();  //get function for the CPU
	string m_GetPowerSupply();  //get function for the Power supply
	void m_SetType();
	void m_GetType();
private:
	string m_GPU;  //data member for the GPU of the desktop
	string m_CPU;  //data member for the CPU of the desktop
	string m_PowerSupply;  //data member for the Power Supply for the desktop
};

class Tablet : public Computer
{
public:
	Tablet();  //class name/ default constructor
	void m_SetScreenSize();  //set function for the Screen Size
	void m_SetCPU();  //set function for the CPU
	void m_SetGPU();  //set function for the GPU
	string m_GetScreenSize();  //get function for the Screen Size
	string m_GetCPU();  //get function for the CPU
	string m_GetGPU();  //get function for the GPU
	void m_SetType();
	void m_GetType();
private:
	string m_ScreenSize;  //data member for the Screen size of the Tablet
	string m_CPU;  //data member for the CPU of the Tablet
	string m_GPU;  //data member for the GPU of the Tablet
};
