#include "stdafx.h"
using namespace std;

int GLOBAL_1 = 1, GLOBAL_2 = 7;

void TestFnc() {

	int Local = 2;
	int GLOBAL_2 = 20;
	Local += 10;
	GLOBAL_2 += 10;
	cout << "GLOBAL_2 ���ȬO " << GLOBAL_2 << endl;
	cout << "::GLOBAL_2 ���ȬO " << ::GLOBAL_2 << endl << endl;

}

void _9_Global() {

	int Local = 3, GLOBAL_1 = 9;
	cout << "GLOBAL_1 ���ȭ�ӬO: " << GLOBAL_1 << endl;
	cout << "Local ���ȭ�ӬO: " << Local << endl << endl;
	TestFnc();
	cout << "�I�s TestFnc() ����C\n" << endl;
	cout << "GLOBAL_1 ���ȥثe�O: " << GLOBAL_1 << endl;
	cout << "Local ���ȥثe�O: " << Local << endl << endl;
	system("pause");
}

