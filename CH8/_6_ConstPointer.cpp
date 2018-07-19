#include "stdafx.h"
using namespace std;

void _6_ConstPointer() {

	int x = 100, y = 200;
	const int *ptr = &x; //*ptr不可改裡面的值(*ptr)，但可改參考位址(ptr)。
	int *const q = &y;	//q不可改參考位址(q)，但可改裡面的值(*q)。
	const int* const qp = &x; //qp不可改參考位址(qp)及裡面的值(*qp)，只能改x的值(x)。

	cout << "x = " << x << " *ptr = " << *ptr << endl;
	cout << "y = " << y << " *q =  " << *q << endl;
	cout << "&x = " << &x << endl;
	cout << "&y = " << &y << endl;

	 
	cout << "*ptr = " << *ptr << endl;

	//不可直接修改 *ptr 的值未改變a的值
	//*ptr = y; *ptr = 200;
	//可以用間接的去改 ptr 參考某變數的位址
	ptr = &y;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;
	

	cout << "*q = " << *q << endl;
	//不可修改 q 的參考位址
	//q = &x;
	//但可以用間接的去改 q 裡的值
	*q = x;
	cout << "q = " << q << endl;
	cout << "*q = " << *q << endl;

	cout << "*qp = " << *qp << endl;
	//不可修改 qp 的參考位址
	//qp = &y;
	//也不可以間接的去改 qp 裡的值
	//*qp = y;
	//只能修改x的值
	x = 300;
	cout << "qp = " << qp << endl;
	cout << "*qp = " << *qp << endl;

	system("pause > nul");
}