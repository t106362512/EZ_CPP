#include "stdafx.h"
using namespace std;

int Factorial(int);

void _6_Factorial() {

	int N;
	cout << "請輸入一個 12 以下的正整數: ";
	cin >> N;
	if (N < 0)
		cout << "錯誤! 您輸入了負數." << endl;
	else
		cout << N << " ! = " << Factorial(N) << endl;
	system("pause");
}

int Factorial(int N) {
	if (N <= 1) return 1;
	else return N * Factorial(N - 1);
}