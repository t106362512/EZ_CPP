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
	cout << "�@ " << Size << " ��Officer:" << endl;

	for (int i = 0; i < Size; i++)
	{
		cout << "�п�J Officer[" << i << "] ���m�W: ";
		cin.getline(Officer[i].Name, NameSize, '\n');
		cout << "�q�ܸ��X: ";
		cin.getline(Officer[i].Phone, PhoneSize, '\n');
	}

	for (int i = 0; i < Size; i++)
	{
		cout << "Officer[" << i << "] ����ƬO: " << endl
			<< "�m�W : " << Officer[i].Name << endl
			<< "�q�ܸ��X: " << Officer[i].Phone << endl;
	}

	system("pause");
}