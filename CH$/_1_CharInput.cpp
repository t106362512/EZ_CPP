#include "stdafx.h"
#include <iostream>;
using namespace std;
void _1_CharInput()
{
	char ch;
	cout << "�п�J�@�Ӧr��(Y/N):" << endl;
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
		cout << "�z��J�FYes " << endl;
	else
		cout << "�z��J�FNo " << endl;

	system("PAUSE");
}