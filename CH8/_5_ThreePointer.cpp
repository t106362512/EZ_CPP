#include "stdafx.h"
using namespace std;

void _5_ThreePointer() {

	int x = 100;
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;


	cout << "x 變數所在的位址: " << &x << "它的值為: " << x << endl;

	cout << "p1 指標變數的位址: " << &p1 << " 它存放的位址: " << p1 << endl;
	cout << "x = " << x << ", *p1 = " << *p1 << endl;

	cout << "p2 變數所在的位址: " << &p2 << " 它存放的位址: " << p2 << endl;
	cout << "*p2 = " << *p2 << ", **p2 = " << **p2 << endl;

	cout << "p3 變數所在的位址: " << &p3 << " 它存放的位址: " << p3 << endl;
	cout << "*p3 = " << *p3 << ", **p3 = " << **p3 << ", ***p3 = " << ***p3 << endl;

	cout << "p1 指標變數的值: " << *p1 << " p2 指標變數的值: " << **p2 << " p3 指標變數的值: " << ***p3<< endl;

	cout << "p1 佔" << sizeof(p1) << " p2 佔" << sizeof(p2) << " p3 佔" << sizeof(p3)<< endl;
	system("pause > nul");
}