#include "stdafx.h"
using namespace std;

void _6_ConstPointer() {

	int x = 100, y = 200;
	const int *ptr = &x; //*ptr���i��̭�����(*ptr)�A���i��ѦҦ�}(ptr)�C
	int *const q = &y;	//q���i��ѦҦ�}(q)�A���i��̭�����(*q)�C
	const int* const qp = &x; //qp���i��ѦҦ�}(qp)�θ̭�����(*qp)�A�u���x����(x)�C

	cout << "x = " << x << " *ptr = " << *ptr << endl;
	cout << "y = " << y << " *q =  " << *q << endl;
	cout << "&x = " << &x << endl;
	cout << "&y = " << &y << endl;

	 
	cout << "*ptr = " << *ptr << endl;

	//���i�����ק� *ptr ���ȥ�����a����
	//*ptr = y; *ptr = 200;
	//�i�H�ζ������h�� ptr �ѦҬY�ܼƪ���}
	ptr = &y;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;
	

	cout << "*q = " << *q << endl;
	//���i�ק� q ���ѦҦ�}
	//q = &x;
	//���i�H�ζ������h�� q �̪���
	*q = x;
	cout << "q = " << q << endl;
	cout << "*q = " << *q << endl;

	cout << "*qp = " << *qp << endl;
	//���i�ק� qp ���ѦҦ�}
	//qp = &y;
	//�]���i�H�������h�� qp �̪���
	//*qp = y;
	//�u��ק�x����
	x = 300;
	cout << "qp = " << qp << endl;
	cout << "*qp = " << *qp << endl;

	system("pause > nul");
}