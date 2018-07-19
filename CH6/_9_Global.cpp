#include "stdafx.h"
using namespace std;

int GLOBAL_1 = 1, GLOBAL_2 = 7;

void TestFnc() {

	int Local = 2;
	int GLOBAL_2 = 20;
	Local += 10;
	GLOBAL_2 += 10;
	cout << "GLOBAL_2 的值是 " << GLOBAL_2 << endl;
	cout << "::GLOBAL_2 的值是 " << ::GLOBAL_2 << endl << endl;

}

void _9_Global() {

	int Local = 3, GLOBAL_1 = 9;
	cout << "GLOBAL_1 的值原來是: " << GLOBAL_1 << endl;
	cout << "Local 的值原來是: " << Local << endl << endl;
	TestFnc();
	cout << "呼叫 TestFnc() 之後。\n" << endl;
	cout << "GLOBAL_1 的值目前是: " << GLOBAL_1 << endl;
	cout << "Local 的值目前是: " << Local << endl << endl;
	system("pause");
}

