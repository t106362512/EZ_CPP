#include "stdafx.h"
#define START_DEBUG 1
using namespace std;

void _15_Define_ifdef4() {

	int A[6] = { 23,31,3,19,54,12 };
	int i, j, t, iSwitch;
	for (j = 0; j < 6; j++)
		cout << setw(4) << A[j];
	cout << endl;
	do
	{
		iSwitch = 0;
		for(i=0;i<5;i++)
			if (A[i]>A[i+1])
			{
				t = A[i];
				A[i] = A[i + 1];
				A[i + 1] = t;
				iSwitch = 1;
			}
#ifdef START_DEBUG
		for (j = 0; j < 6; j++)
			cout << setw(4) << A[j];
		cout << endl;
#endif // START_DEBUG
	} while (iSwitch);
#ifndef START_DEBUG
	for (j = 0; j < 6; j++)
		cout << setw(4) << A[j];
	cout << endl;
#endif // !START_DEBUG
	system("pause");
}