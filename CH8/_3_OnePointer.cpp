#include "stdafx.h"
using namespace std;

void _3_OnePointer() {

	int x = 100, y = 200;
	int *ptr = &x;

	cout << "x 跑计┮: " << &x << "ウ: " << x << endl;
	cout << "y 跑计┮: " << &y << "ウ: " << y << endl;

	cout << "ptr 跑计┮: " << &ptr << "ウ: " << ptr << "" << *ptr << endl;
	cout << "x = " << x << ", *ptr = " << *ptr << endl;

	ptr = &y;

	cout << "ptr 跑计┮: " << &ptr << "ウ: " << ptr << "" << *ptr << endl;
	cout << "y = " << y << ", *ptr = " << *ptr << endl;

	cout << "ptr " << sizeof(ptr) << endl;
	system("pause > nul");
}