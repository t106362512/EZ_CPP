#include "stdafx.h"

using namespace std;

int Am, An;
static int ASX, ASy;

void Func1(), Func2(), Func3();

void _10_ExternA() {
	cout << "執行過 Func1()" << endl;
	Func1();
	cout << "Am\t的值是: " << Am << endl;
	cout << "An\t的值是: " << An << endl << endl;

	cout << "執行過 Func2()" << endl;
	Func2();
	cout << "Am\t的值是: " << Am << endl;
	cout << "An\t的值是: " << An << endl << endl;

	cout << "執行過 Func3()" << endl;
	Func3();

	system("pause > nul");
}

extern int Bp;

void Func3() {
	cout << "Bp\t的值是: " << Bp << endl;
}
