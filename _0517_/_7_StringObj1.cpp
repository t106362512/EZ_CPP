#include "stdafx.h"
#include <string>
using namespace std;

void _7_StringObj1() {

	string s0 = "Hello";
	string s1 = " word";
	string s2(s0 + s1);
	string s3 = s2 + "!";
	string s4(s0 + "!");

	cout << "s0 = " << s0 << endl;
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;

	system("pause");
}