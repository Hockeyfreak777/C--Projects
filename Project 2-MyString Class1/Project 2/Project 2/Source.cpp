#include "MyString.h"
#include <iostream>

using namespace std;

int main()
{
	MyString mystringbitch("hello ,bitches!");
	MyString mystringbutch("world");
	MyString butchbitch("");
	mystringbitch.Insert(" world",5);
	butchbitch.Append(mystringbitch);
	cout << mystringbitch << "\n" << butchbitch << endl;

	system("pause");
	return 0;
}

