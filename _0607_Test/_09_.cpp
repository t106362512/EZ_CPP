#include "stdafx.h"
using namespace std;

void _09_() {

	for (int i = 1; i <=1000 ; i++)
		if (i % 3 == 0 && i%5==0 && i%7==0)
			cout << i <<"\t";
	cout << endl;
	system("pause");
}