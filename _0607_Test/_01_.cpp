#include "stdafx.h"
#include <ctype.h>
#include <string>

using namespace std;

bool check(char *);

void _01_()
{
	char inbuf[80];
	cout << " 請輸入身分證字號: ";
	cin >> inbuf;
	cout << (check(inbuf) ? "是正確的身分證字號" : "不是正確的身分證字號") << endl;
	system("pause");
} 

bool check(char *s)
{
	char LE[]= "ABCDEFGHJKLMNPQRSTUVXYWZIO";
	if (strlen(s) != 10 || (strchr(LE, toupper(*s))) == 0 ) 
		return false;
} 
