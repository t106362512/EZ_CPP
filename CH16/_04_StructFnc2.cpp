#include "stdafx.h"
using namespace std;

struct Employee
{
	char Name[20];
	char Phone[10];
	int ID;
};

void ShowMember_2(Employee A) {

	cout << "資料的詳細內容是:" << endl
		<< "姓名\t:" << A.Name << endl
		<< "電話\t:" << A.Phone << endl
		<< "編號\t:" << A.ID << endl;
}


void ChangeID(Employee *pE, int NewID) {
	pE->ID = NewID;
	//同等於(*pE).ID = NewID;
	return;
}

void _04_StructFnc2() {
	Employee Ea = { "Ann","02384125",105 };
	Employee Eb = { "Joanne","03544132",106 };

	ShowMember_2(Ea);
	ShowMember_2(Eb);
	ChangeID(&Ea, 208);
	cout << "執行 ChangeID() 後:" << endl;
	ShowMember_2(Ea);
	system("pause");
}
