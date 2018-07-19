#include "stdafx.h"
using namespace std;

struct Element
{
	int Value;
	Element* Next;
};

void ShowElement(Element* pShow) {
	while (pShow != NULL)
	{
		cout << pShow->Value << ' ';
		pShow = pShow->Next;
	}
	cout << endl;
}

void _05_ListStruct() {

	int Size;
	cout << "�п�J Element ���ƥ�:" << endl;
	cin >> Size;
	Element* pE = new Element[Size];
	for (int i = 0; i < (Size - 1); i++)
		pE[i].Next = pE + i + 1;

	pE[Size - 1].Next = NULL;
	for (int i = 0; i < (Size); i++)
		pE[i].Value = i * 2;
	cout << "Element �����e�O:" << endl;
	ShowElement(pE);
	delete[] pE;
	system("pause");
}