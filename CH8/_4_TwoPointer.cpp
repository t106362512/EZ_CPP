#include "stdafx.h"
using namespace std;

void _4_TwoPointer() {

	int x = 100;
	int *p1 = &x;
	int **p2 = &p1;


	cout << "x �ܼƩҦb����}: " << &x << "�����Ȭ�: " << x << endl;

	cout << "p1 �����ܼƪ���}: " << &p1 << " ���s�񪺦�}: " << p1 << endl;
	cout << "x = " << x << ", *p1 = " << *p1 << endl;

	cout << "p2 �ܼƩҦb����}: " << &p2 << " ���s�񪺦�}: " << p2 << endl;
	cout << "*p2 = " << *p2 << ", **p2 = " << **p2 << endl;

	cout << "p1 �����ܼƪ���: " << *p1 << " p2 �����ܼƪ���: " << **p2 << endl;

	cout << "p1 ��" << sizeof(p1) << " p2 ��" << sizeof(p2) << endl;
	system("pause > nul");
}