#include "stdafx.h"
#include <iostream>;
using namespace std;
void _1_CharInput()
{
	char ch;
	cout << "請輸入一個字母(Y/N):" << endl;
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
		cout << "您輸入了Yes " << endl;
	else
		cout << "您輸入了No " << endl;

	system("PAUSE");
}