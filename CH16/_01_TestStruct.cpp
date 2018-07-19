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

	cout << "Ea 的資料是:\n"
		<< "姓名:\t" << Ea.Name << endl
		<< "電話:\t" << Ea.Phone << endl
		<< "編號:\t" << Ea.ID << endl;

	cout << "Eb 的資料是:\n"
		<< "姓名:\t" << Eb.Name << endl
		<< "電話:\t" << Eb.Phone << endl
		<< "編號:\t" << Eb.ID << endl;

	system("pause");
}