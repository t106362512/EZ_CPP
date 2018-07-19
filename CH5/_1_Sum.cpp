#include "stdafx.h"
using namespace std;

void _1_Sum() {

	int N, Count = 1, Sum = 0;
	cout << "請輸入要累積的數目:";cin >> N;
	while (Count <= N) Sum += Count++; //單行可縮行，先Sum+=Count，再Count++
	cout << "總和 = " << Sum << endl;
	system("pause > nul");
}