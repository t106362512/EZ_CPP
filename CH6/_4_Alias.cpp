#include "stdafx.h"
using namespace std;

void _4_Alias() {

	int N = 10;
	int& M = N;
	cout << " M = " << M << endl;
	cout << " N = " << N << endl;
	N = 5;
	cout << " M = " << M << endl;
	cout << " N = " << N << endl;
	M = 2;
	cout << " M = " << M << endl;
	cout << " N = " << N << endl;

	system("pause");
}

