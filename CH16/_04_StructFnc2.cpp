#include "stdafx.h"
using namespace std;

struct Employee
{
	char Name[20];
	char Phone[10];
	int ID;
};

void ShowMember_2(Employee A) {

	cout << "��ƪ��ԲӤ��e�O:" << endl
		<< "�m�W\t:" << A.Name << endl
		<< "�q��\t:" << A.Phone << endl
		<< "�s��\t:" << A.ID << endl;
}


void ChangeID(Employee *pE, int NewID) {
	pE->ID = NewID;
	//�P����(*pE).ID = NewID;
	return;
}

void _04_StructFnc2() {
	Employee Ea = { "Ann","02384125",105 };
	Employee Eb = { "Joanne","03544132",106 };

	ShowMember_2(Ea);
	ShowMember_2(Eb);
	ChangeID(&Ea, 208);
	cout << "���� ChangeID() ��:" << endl;
	ShowMember_2(Ea);
	system("pause");
}
