#include "stdafx.h"
#include <string>
using namespace std;

void _12_StringPtr() {

	int i[3] = { 10,20,40 };
	const int max = 15;
	int*pI = i;
	char c[max] = "Hello, C++!";
	char *pC;
	pC = c;

	cout << "c\t=: " << c << endl;
	cout << "pC\t=: " << pC << endl;
	cout << "i\t=: " << i << endl;
	cout << "pI\t=: " << pI << endl;
	cout << "*c\t=: " << *c << endl;
	cout << "(void*)c\t=: " << (void*)c << endl;

	system("pause");

}