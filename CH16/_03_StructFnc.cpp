#include "stdafx.h"
#include <cstring>
using namespace std;

struct Employee
{
	char Name[20];
	char Phone[10];
	int ID;
};

void ShowMember(Employee A) {

	cout << "��ƪ��ԲӤ��e�O:" << endl
		<< "�m�W\t:" << A.Name << endl
		<< "�q��\t:" << A.Phone << endl
		<< "�s��\t:" << A.ID << endl;
}

void ChangeName(Employee &A, char NewName[]) {

	strcpy_s(A.Name, NewName);
	return;
}



void _03_StructFnc() {
	Employee Ea = { "Ann","02384125",105 };
	Employee Eb = { "Joanne","03544132",106 };
	ShowMember(Ea);
	ShowMember(Eb);
	char Name_Change[] = {"Jackson"};
	ChangeName(Ea, Name_Change);
	cout << "���� ChangeName() ��:" << endl;
	ShowMember(Ea);
	system("pause");
}
