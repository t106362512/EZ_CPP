#include "stdafx.h"

using namespace std;

void ftom()
{
	double foot, eng, y;
	int m;
	cout << "�п�J�n�ഫ���^�ؼ�:"; cin >> foot;
	cout << endl;
	m = foot * 0.3048;

	cout << "�п�J�n�ഫ���^�T��:"; cin >> eng;
	cout << endl;
	y = eng * 2.54;

	cout << foot << "�^��" << eng << "�^�T=" << m +  << "����" << y << "����" << endl;
}


void mtof()
{
	double b, i, j;
	int d;
	cout << "�п�J�n�ഫ�����ؼ�:";
	cin >> b;
	cout << endl;
	d = b * 3.28083;

	cout << "�п�J�n�ഫ��������:";
	cin >> i;
	cout << endl;
	j = i * 0.3937;

	cout << b << "����" << i << "����=" << d << "�^��" << j << "�^�T" << endl;
}

void _01_Conversion1() {
	int x;
	double inPut;
	cout << "1.�^�T�ऽ��\t2.������^�o\t3.����: ";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "�п�J�n�ഫ���^�T�ơA��J0�h����: ";
		cout << inPut << " �^�T�� " << itoc(inPut) << "����" << endl;
		break;
	case 2:
		cout << "�п�J�n�ഫ�������ơA��J0�h����: "; cin >> inPut;
		cout << inPut << " ������ " << ctoi(inPut) << "�^�T" << endl;
		break;
	case 3: return;
	default: break;
	}
	system("pause > nul");
}
