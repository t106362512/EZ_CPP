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
	cout << "�п�J�^��r��:";
	cin >> str;
	reverse(str);
	cout << "��X�ϦV��r��:";
	puts(str);
}