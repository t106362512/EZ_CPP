#include "stdafx.h"

using namespace std;

inline double itoc(double in) {
	return in * 2.54;
}

inline double ctoi(double cm) {
	return cm * 0.3937;
}

void _01_Conversion1() {
	int x;
	double inPut;
	cout << "1.�^�T�ऽ��\t2.������^�o\t3.����: " ;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "�п�J�n�ഫ���^�T�ơA��J0�h����: "; cin >> inPut;
		if (inPut == 0) return;
		cout << inPut << " �^�T�� " << itoc(inPut) << "����" << endl ;
		break;
	case 2:
		cout << "�п�J�n�ഫ�������ơA��J0�h����: "; cin >> inPut;
		if (inPut == 0) return;
		cout << inPut << " ������ " << ctoi(inPut) << "�^�T" << endl;
		break;
	case 3: return;
	default: break;
	}
	system("pause > nul");
}
