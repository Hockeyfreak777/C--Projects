/*
	Stephen Campbell
	Geometry shapes demonstration of classes with inheritance
	11/19/2014
*/

#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;

int main()
{
	MyRect simpleRectangle;
	simpleRectangle.m_SetLength();
	simpleRectangle.m_SetWidth();
	//simpleRectangle.m_Prot_Val = 10;
	simpleRectangle.m_CalcArea(simpleRectangle.m_GetLength(), simpleRectangle.m_GetWidth(), simpleRectangle.m_GetType());
	simpleRectangle.m_CalcPerim(simpleRectangle.m_GetLength(), simpleRectangle.m_GetWidth(), simpleRectangle.m_GetType());
	simpleRectangle.m_Display_Data();

	MyCircle simpleCircle;
	simpleCircle.m_SetRadius();
	simpleCircle.m_CalcArea(simpleCircle.m_GetRadius(), 1.0, simpleCircle.m_GetType());
	simpleCircle.m_SetCircum();
	simpleCircle.m_DisplayData();


	system("pause");
	return 0;
}
