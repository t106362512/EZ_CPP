#include "stdafx.h"

using namespace std;

int Am, An;
static int ASX, ASy;

void Func1(), Func2(), Func3();

void _10_ExternA() {
	cout << "����L Func1()" << endl;
	Func1();
	cout << "Am\t���ȬO: " << Am << endl;
	cout << "An\t���ȬO: " << An << endl << endl;

	cout << "����L Func2()" << endl;
	Func2();
	cout << "Am\t���ȬO: " << Am << endl;
	cout << "An\t���ȬO: " << An << endl << endl;

	cout << "����L Func3()" << endl;
	Func3();

	system("pause > nul");
}

extern int Bp;

void Func3() {
	cout << "Bp\t���ȬO: " << Bp << endl;
}
