#include "stdafx.h"
using namespace std;

struct Employee
{
	char Name[20];
	char Phone[10];
	int ID;
};

void _01_TestStruct() {

	Employee Ea = { "Nicole","02384125",105 };
	Employee Eb = { "Joanne","03544132",106 };

	cout << "Ea ����ƬO:\n"
		<< "�m�W:\t" << Ea.Name << endl
		<< "�q��:\t" << Ea.Phone << endl
		<< "�s��:\t" << Ea.ID << endl;

	cout << "Eb ����ƬO:\n"
		<< "�m�W:\t" << Eb.Name << endl
		<< "�q��:\t" << Eb.Phone << endl
		<< "�s��:\t" << Eb.ID << endl;

	system("pause");
}