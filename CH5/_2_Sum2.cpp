#include "stdafx.h"
using namespace std;

void _2_Sum2() {

	int N, Count = 1, Sum = 0;
	cout << "�п�J�n�ֿn���ƥ�:"; cin >> N;
	while (true) {
		Sum += Count++;
		if (Count > N) break;
	}
	cout << "�`�M = " << Sum << endl;
	system("pause > nul");
}