#include "stdafx.h"
using namespace std;

void _1_Variable() {

	double A = 2.5;
	cout << "A 的值為: " << A << endl;
	cout << "A 所占用的記憶體大小為: "
		<< sizeof(A) << " bytes 或是 "
		<< sizeof(double) << " bytes" << endl;
	cout << "A 所在位址為: "
		<< "0x" << &A << endl; //&A 取A變數的位址
	system("pause > nul");
}