#include "stdafx.h"
using namespace std;

int Factorial(int);

void _6_Factorial() {

	int N;
	cout << "�п�J�@�� 12 �H�U�������: ";
	cin >> N;
	if (N < 0)
		cout << "���~! �z��J�F�t��." << endl;
	else
		cout << N << " ! = " << Factorial(N) << endl;
	system("pause");
}

int Factorial(int N) {
	if (N <= 1) return 1;
	else return N * Factorial(N - 1);
}