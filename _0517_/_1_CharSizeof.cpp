#include "stdafx.h"
using namespace std;

void _1_CharSizeof() {

	char a[] = "My Friend";
	char b = 'c';
	char c[] = "c";

	cout << "sizeof(a) = " << sizeof(a) << endl;
	cout << "sizeof(b) = " << sizeof(b) << endl;
	cout << "sizeof(c) = " << sizeof(c) << endl;

	system("pause");
}