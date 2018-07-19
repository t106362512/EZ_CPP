#include "stdafx.h"
#include <string>
using namespace std;

void _6_StringObj() {

	string s0 = "C++ string class";
	string s1("c++ string class");
	string s2 = s1;
	string s3(s1);
	string s4(s1, 4, 12);
	string s5(s1, 0, 3);

	cout << "s0 = " << s0 << endl;
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;
	cout << "s5 = " << s5 << endl;

	system("pause");
}