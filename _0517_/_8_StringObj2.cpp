#include "stdafx.h"
#include <string>
using namespace std;

void _8_StringObj2() {

	string s1, s2;
	cout << "i/p s1: ";
	getline(cin, s1);
	cout << "i/p s2: ";
	getline(cin, s2);
	if (s1 == s2)
		cout << "s1 == s2" << endl;
	else
		cout << "s1 != s2" << endl;
	system("pause");
}