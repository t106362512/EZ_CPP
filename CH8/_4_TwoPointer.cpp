#include "stdafx.h"
using namespace std;

void _4_TwoPointer() {

	int x = 100;
	int *p1 = &x;
	int **p2 = &p1;


	cout << "x 變數所在的位址: " << &x << "它的值為: " << x << endl;

	cout << "p1 指標變數的位址: " << &p1 << " 它存放的位址: " << p1 << endl;
	cout << "x = " << x << ", *p1 = " << *p1 << endl;

	cout << "p2 變數所在的位址: " << &p2 << " 它存放的位址: " << p2 << endl;
	cout << "*p2 = " << *p2 << ", **p2 = " << **p2 << endl;

	cout << "p1 指標變數的值: " << *p1 << " p2 指標變數的值: " << **p2 << endl;

	cout << "p1 佔" << sizeof(p1) << " p2 佔" << sizeof(p2) << endl;
	system("pause > nul");
}