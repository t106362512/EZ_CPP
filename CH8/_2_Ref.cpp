#include "stdafx.h"
using namespace std;

void _2_Ref() {

	double x = 1.0;
	double &y = x; //�w�qx���ѷ�y
	double *p = &x; //�w�q��l�ƫ���p���V&x����}
	double* p1 = &x;
	//double* p = &x�Adouble *p = &x�ۦP
	//&x��Q�h�ӫ��Ы��V
	cout << "x ��Ӫ��ȬO " << x << endl;
	*p = 5.0;
	cout << "���� *p = 5.0 �� \nx���ȬO " << x << endl;
	y = 7.3;
	cout << "���� y = 7.3�� \nx���ȬO " << x << endl;
	cout << "�@�}�l��l�� *p1 = &x \n*p1���ȬO " << *p1 << endl;
	cout << "x���O�����}�O " << &x << endl;
	cout << "*p���ȬO " << *p << endl;
	cout << "*p���O�����}�O " << &p << endl;
	cout << "*p���O����j�p�O " << sizeof(*p) << endl;
	system("pause > nul");
}