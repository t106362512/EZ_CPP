#include "stdafx.h"
using namespace std;

void _1_Sum() {

	int N, Count = 1, Sum = 0;
	cout << "�п�J�n�ֿn���ƥ�:";cin >> N;
	while (Count <= N) Sum += Count++; //���i�Y��A��Sum+=Count�A�ACount++
	cout << "�`�M = " << Sum << endl;
	system("pause > nul");
}