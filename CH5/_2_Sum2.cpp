#include "stdafx.h"
using namespace std;

void _2_Sum2() {

	int N, Count = 1, Sum = 0;
	cout << "請輸入要累積的數目:"; cin >> N;
	while (true) {
		Sum += Count++;
		if (Count > N) break;
	}
	cout << "總和 = " << Sum << endl;
	system("pause > nul");
}