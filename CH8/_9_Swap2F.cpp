#include "stdafx.h"
using namespace std;

void SwapF(double* x, double*y) {
	double Temp;
	Temp = *x;
	*x = *y;
	*y = Temp;
	return;
}

void _9_Swap2F() {

	double a = 2, b = 5;
	cout << "執行 SwapF() 前, \n";
	cout << " a是: " << a << " b是: " << b << endl;
	SwapF(&a, &b);
	cout << "執行 SwapF() 後, \n";
	cout << " a是: " << a << " b是: " << b << endl;

	system("pause > nul");
}