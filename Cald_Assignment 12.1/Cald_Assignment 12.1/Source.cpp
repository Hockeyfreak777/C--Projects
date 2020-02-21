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

int main()
{
	Laptop simpleLaptop;  //each class type with there own set functions
	simpleLaptop.m_GetCPU();
	simpleLaptop.m_GetGPU();
	simpleLaptop.m_GetScreenSize();

	simpleLaptop.m_SetCPU(simpleLaptop.m_GetType());
	simpleLaptop.m_SetGPU(simpleLaptop.m_GetType());
	simpleLaptop.m_SetScreenSize(simpleLaptop.m_GetType);

	Desktop simpleDesktop; //each class type with there own set functions
	simpleDesktop.m_SetGPU();
	simpleDesktop.m_SetCPU();
	simpleDesktop.m_SetPowerSupply();

	simpleDesktop.m_GetGPU(simpleDesktop.m_GetType());
	simpleDesktop.m_GetCPU(simpleDesktop.m_GetType);
	simpleDesktop.m_GetPowerSupply(simpleDesktop.m_GetType);

	Tablet simpleTablet; //each class type with there own set functions
	simpleTablet.m_GetScreenSize();
	simpleTablet.m_GetCPU();
	simpleTablet.m_GetGPU();

	simpleTablet.m_SetScreenSize(simpleTablet.m_GetType());
	simpleTablet.m_SetCPU(simpleTablet.m_GetType());
	simpleTablet.m_SetGPU(simpleTablet.m_GetType());

	system("pause");
	return 0;
}

