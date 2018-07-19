#include "stdafx.h"
using namespace std;

void _1_CharInput() {
	char ch;
	cout << "請輸入一個字母 (Y/N):" << endl;
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
		cout << "您輸入了 yes." << endl;
	else
		cout << "您輸入了No." << endl;
	system("pause > nul");
}