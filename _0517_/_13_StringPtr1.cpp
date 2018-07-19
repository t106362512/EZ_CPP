#include "stdafx.h"
#include <string>
using namespace std;

void capital(char *);
void _13_StringPtr1() {

	char str[] = "U will never win,if u never begin.\n";
	char *strPtr = str;
	cout << "Before: " << str;
	capital(strPtr);
	cout << "After: " << str;

	system("pause");
}

void capital(char *s) {

	while (*s != '\0')
		if (*s++ == ' ')	
			*s -= 32;
	
}