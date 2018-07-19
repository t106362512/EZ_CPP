#include "stdafx.h"
using namespace std;

int GCD(int, int);

void _7_GCD() {
	int Num1, Num2;
	cout << "請輸入第一個正整數 (共兩個): " << endl;
	cin >> Num1;
	cout << "請輸入第二個正整數 (共兩個): " << endl;
	cin >> Num2;
	cout << Num1 << " 和 " << Num2 << " 的最大公因數是 "
		<< GCD(Num1, Num2);
	system("pause");
}

int GCD(int M, int N) {
	if ((M%N) == 0)
		return N;
	else
		return GCD(N, M%N);
}