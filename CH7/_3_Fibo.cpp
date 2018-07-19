#include "stdafx.h"
using namespace std;

const int MaxSize = 46;

int Fibonacci(int N) {
	int i;
	static int Fib[MaxSize];
	Fib[0] = Fib[1] = 1;

	for (i = 0; i < MaxSize; i++)
		if (Fib[i] == 0) break;
	while (i <= N)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
		i++;
	}
	return Fib[N];
}

void _3_Fibo() {
	int InputN, i;
	cout << "請輸入 Fibonacci 數列的長度: ";
	cin >> InputN;
	if (InputN>MaxSize)
	{
		cerr << "Maximun size exceeded!" << endl;
		system("pause > nul");
		return;
	}
	cout << "下列是您所指定長度為 " << InputN << " 的 Fibonacci 數列: " << endl;
	for (i = 0; i < InputN; i++)
		cout << Fibonacci(i) << " ";
	cout << endl;
	system("pause > nul");
}