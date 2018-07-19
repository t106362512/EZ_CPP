#include "stdafx.h"
using namespace std;

void Swap(int& x, int& y) {
	int Temp;
	Temp = x; x = y; y = Temp;
	cout << &Temp << endl;
	cout << &y << endl;
}

void Swap2(int x, int y) {
	int Temp;
	Temp = x; x = y; y = Temp;
	cout << &x << endl;
	cout << &y << endl;
}

void _6_Swap() {

	int A = 5, B = 10;
	Swap(A, B);
	cout << "執行過Swap ()\n" << endl;
	cout << "A的值是: " << A 
		<< "\nB的值是: " << B << endl;

	Swap2(A, B);
	cout << "\n執行過Swap2 ()\n" << endl;
	cout << "A的值是: " << A
		<< "\nB的值是: " << B << endl;
	system("pause");
}

