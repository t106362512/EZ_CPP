#include "stdafx.h"
#include <string>
#include <ctype.h>
using namespace std;

void capital(char *);
void _03_() {

	const int Len = 99;
	char str[Len];
	cout << "�п�J�^��r��: ";
	cin.getline(str, Len);
	capital(str);
	cout << "��X�ϦV��r��: " << str<<endl;
	system("pause");
}

void capital(char *sPtr)
{
	while (*sPtr != NULL)
	{
		if (*sPtr <= 'Z' && *sPtr >= 'A')
			*sPtr = *sPtr + 32;
		*sPtr++;
	}
}