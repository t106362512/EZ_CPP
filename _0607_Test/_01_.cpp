#include "stdafx.h"
#include <ctype.h>
#include <string>

using namespace std;

bool check(char *);

void _01_()
{
	char inbuf[80];
	cout << " �п�J�����Ҧr��: ";
	cin >> inbuf;
	cout << (check(inbuf) ? "�O���T�������Ҧr��" : "���O���T�������Ҧr��") << endl;
	system("pause");
} 

bool check(char *s)
{
	char LE[]= "ABCDEFGHJKLMNPQRSTUVXYWZIO";
	if (strlen(s) != 10 || (strchr(LE, toupper(*s))) == 0 ) 
		return false;
} 
