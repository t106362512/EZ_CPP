#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

double inValue,outValue;

void ltog()
{
	cout << "�п�J�n�ഫ�����ɼ�:" ;
	cin >> inValue;
	outValue = inValue * 0.264178;
	cout << inValue << " ���� = " << outValue << " �[��" << endl;
}

void gtol()
{
	cout << "�п�J�n�ഫ���[�ڼ�:" ;
	cin >> inValue;
	outValue = inValue * 3.78533;
	cout << inValue << "�[��=" << outValue << "����" << endl;
}

void _1_Convert()
{
	int x;
	cout << "1.������[�� 2.�[���ऽ�� 3.����:" ;
	cin >> x;

	switch (x){

	case 1: ltog(); break;
	case 2: gtol(); break;
	case 3: return;
	default:
	    cout << "�L����" << endl;
	}

	system("PAUSE > nul");
}
