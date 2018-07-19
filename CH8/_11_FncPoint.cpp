#include "stdafx.h"
using namespace std;

double F1(int N) { return double(N*N);}

double F2(int N) { return double(N*N*N); }

double Twice(double(*pF)(int), int N) {
	return 2.0* pF(N);
}

void _11_FncPoint() {

	int A = 3, B = 5;

	cout << "Twice(F1, A)的值是: " << Twice(F1, A) << endl;
	cout << "Twice(F2, B)的值是: " << Twice(F2, B) << endl;
	system("pause > nul");
}