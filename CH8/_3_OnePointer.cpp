#include "stdafx.h"
using namespace std;

void _3_OnePointer() {

	int x = 100, y = 200;
	int *ptr = &x;

	cout << "x �ܼƩҦb����}: " << &x << "�����Ȭ�: " << x << endl;
	cout << "y �ܼƩҦb����}: " << &y << "�����Ȭ�: " << y << endl;

	cout << "ptr �ܼƩҦb����}: " << &ptr << "���s�񪺦�}: " << ptr << "�L�s�񪺭�" << *ptr << endl;
	cout << "x = " << x << ", *ptr = " << *ptr << endl;

	ptr = &y;

	cout << "ptr �ܼƩҦb����}: " << &ptr << "���s�񪺦�}: " << ptr << "�L�s�񪺭�" << *ptr << endl;
	cout << "y = " << y << ", *ptr = " << *ptr << endl;

	cout << "ptr ��" << sizeof(ptr) << endl;
	system("pause > nul");
}