#include "stdafx.h"
using namespace std;

void _3_Const() {
	const int max = 6;
	for (int i = 1; i <= max; i++)
		cout << i << "*" << i << "=" << i * i << "\t";
	cout << endl;
	system("pause");
}