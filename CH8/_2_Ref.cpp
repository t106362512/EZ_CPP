#include "stdafx.h"
using namespace std;

void _2_Ref() {

	double x = 1.0;
	double &y = x; //定義x的參照y
	double *p = &x; //定義初始化指標p指向&x的位址
	double* p1 = &x;
	//double* p = &x，double *p = &x相同
	//&x能被多個指標指向
	cout << "x 原來的值是 " << x << endl;
	*p = 5.0;
	cout << "執行 *p = 5.0 後 \nx的值是 " << x << endl;
	y = 7.3;
	cout << "執行 y = 7.3後 \nx的值是 " << x << endl;
	cout << "一開始初始的 *p1 = &x \n*p1的值是 " << *p1 << endl;
	cout << "x的記憶體位址是 " << &x << endl;
	cout << "*p的值是 " << *p << endl;
	cout << "*p的記憶體位址是 " << &p << endl;
	cout << "*p的記憶體大小是 " << sizeof(*p) << endl;
	system("pause > nul");
}