#include "stdafx.h"
using namespace std;

int GCD(int, int);

void _7_GCD() {
	int Num1, Num2;
	cout << "�п�J�Ĥ@�ӥ���� (�@���): " << endl;
	cin >> Num1;
	cout << "�п�J�ĤG�ӥ���� (�@���): " << endl;
	cin >> Num2;
	cout << Num1 << " �M " << Num2 << " ���̤j���]�ƬO "
		<< GCD(Num1, Num2);
	system("pause");
}

int GCD(int M, int N) {
	if ((M%N) == 0)
		return N;
	else
		return GCD(N, M%N);
}