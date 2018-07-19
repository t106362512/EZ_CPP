#include "stdafx.h"
using namespace std;

void _8_DisIntM() {
	int M = 3, N = 5;
	cout << setw(16) << M << " ¦C " << N << " ¦æ ¯x°}:" << endl;
	for (int i = 1; i <= M; i++)
	{
		for (int j = 0; j <= N; j++)
			cout << setw(5) << i << j;
		cout << endl;
	}
	cout << "-----------------------------------------" << endl;
	system("pause > nul");
}