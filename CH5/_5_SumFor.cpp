#include "stdafx.h"
using namespace std;

void _5_SumFor() {

	int N, Sum = 0;
	cout << "請輸入要累積的數目:"; cin >> N;
	for (int Count = 1; Count <= N; Count++)
		Sum += Count;
	cout << "總和 = " << Sum << endl;
	system("pause > nul");
}