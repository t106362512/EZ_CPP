#include "stdafx.h"
using namespace std;

const int NameSize = 20;
const int PhoneSize = 11;

struct Employee
{
	char Name[NameSize];
	char Phone[PhoneSize];
};

void _02_StructArray() {

	const int Size = 2;
	Employee Officer[Size];
	cout << "共 " << Size << " 個Officer:" << endl;

	for (int i = 0; i < Size; i++)
	{
		cout << "請輸入 Officer[" << i << "] 的姓名: ";
		cin.getline(Officer[i].Name, NameSize, '\n');
		cout << "電話號碼: ";
		cin.getline(Officer[i].Phone, PhoneSize, '\n');
	}

	for (int i = 0; i < Size; i++)
	{
		cout << "Officer[" << i << "] 的資料是: " << endl
			<< "姓名 : " << Officer[i].Name << endl
			<< "電話號碼: " << Officer[i].Phone << endl;
	}

	system("pause");
}