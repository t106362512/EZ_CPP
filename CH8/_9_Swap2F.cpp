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
	cout << "���� SwapF() �e, \n";
	cout << " a�O: " << a << " b�O: " << b << endl;
	SwapF(&a, &b);
	cout << "���� SwapF() ��, \n";
	cout << " a�O: " << a << " b�O: " << b << endl;

	system("pause > nul");
}