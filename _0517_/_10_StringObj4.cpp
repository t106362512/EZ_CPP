#include "stdafx.h"
#include <string>
using namespace std;

void _10_StringObj4() {

	string s1("Hello"), s2("Hi"), s3(" world!");
	cout << "Before connection\n";
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	s1.append(' ' + s3);
	s2.append(s3, 3, 3);
	cout << "After connection\n";
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;

	system("pause");
}