#include "stdafx.h"
#define pi 3.14159
using namespace std;

struct Circle
{
	int radius = 1;
};

inline double perimeter (double r) {
	return 2 * (pi*r);
}

inline double area (double r) {
	return pi*(r*r);
}

void _04_() {

	cout << "�п�J��Ϊ��b�|(����):" ;
	double N;
	cin >> N;
	Circle Ea = { N };
	cout << "��P�� = " << perimeter(Ea.radius) << "����" << endl;
	cout << "�ꭱ�n = " << area(Ea.radius) << "���褽��" << endl;
	system("pause");
}