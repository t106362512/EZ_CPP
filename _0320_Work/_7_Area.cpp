#include "stdafx.h"
using namespace std;

void _7_Area() {
	int cp;
	float x1,x2;
	const double PI = 3.141592;
	cout << "1.��\t2.�x��\t3.�T����\t4.����: "; cin >> cp;

	switch (cp)
	{
	case 1: 
		cout << "�п�J�b�|r: "; cin >> x1;
		cout << "�ꭱ�n = " << x1 * x1 * PI << endl;
		break;
	case 2:
		cout << "�п�J�x�ΤG������A�H�ťչj�}: "; cin >> x1 >> x2;
		cout << "�x�έ��n = " << x1 * x2 << endl; break;
	case 3:
		cout << "�п�J�T���Ω��P���A�H�ťչj�}: "; cin >> x1 >> x2;
		cout << "�x�έ��n = " << (x1 * x2) / 2 << endl; break;
	default: cout << "��J���~" << endl; break;
	}
	system("pause > nul");
}