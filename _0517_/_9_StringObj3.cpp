#include "stdafx.h"
#include <string>
using namespace std;

void _9_StringObj3() {

	string s1("Hello world!"), s2, s3;
	s2.assign(s1);
	s3.assign(s1, 6, 5);
	s3[2] = 'u';
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;

	system("pause");
}