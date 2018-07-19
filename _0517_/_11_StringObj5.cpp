#include "stdafx.h"
#include <string>
using namespace std;

void _11_StringObj5() {

	string s1("Dev C++"), s2("Visual");
	cout << "Before the transfer\n";
	cout << "s2 string: " << s2 << endl;
	cout << "s1 string: " << s1 << endl;
	s1.insert(4, s2);
	cout << "Insert s2 string: " << s1 << endl;
	s1.insert(3, "/");
	cout << "Insert the /: " << s1 << endl;	

	system("pause");
}