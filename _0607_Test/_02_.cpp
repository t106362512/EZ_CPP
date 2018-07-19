#include "stdafx.h"
using namespace std;

void reverse(char* str)
{
	int i, j;
	char c;
	for (i = 0, j = strlen(str) - 1; i<j; ++i, --j)
		c = str[i], str[i] = str[j], str[j] = c;
}

void _02_()
{
	char str[90];
	cout << "請輸入英文字串:";
	cin >> str;
	reverse(str);
	cout << "輸出反向後字串:";
	puts(str);
}