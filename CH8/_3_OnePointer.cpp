#include "stdafx.h"
using namespace std;

void _3_OnePointer() {

	int x = 100, y = 200;
	int *ptr = &x;

	cout << "x 變數所在的位址: " << &x << "它的值為: " << x << endl;
	cout << "y 變數所在的位址: " << &y << "它的值為: " << y << endl;

	cout << "ptr 變數所在的位址: " << &ptr << "它存放的位址: " << ptr << "他存放的值" << *ptr << endl;
	cout << "x = " << x << ", *ptr = " << *ptr << endl;

	ptr = &y;

	cout << "ptr 變數所在的位址: " << &ptr << "它存放的位址: " << ptr << "他存放的值" << *ptr << endl;
	cout << "y = " << y << ", *ptr = " << *ptr << endl;

	cout << "ptr 佔" << sizeof(ptr) << endl;
	system("pause > nul");
}