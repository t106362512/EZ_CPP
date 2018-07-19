#include "stdafx.h"
using namespace std;

const int SIZE = 5;

double Average(double* V) {
	double Sum = 0;
	for (int i = 0; i < SIZE; i++)
		Sum += V[i];
	return Sum / double(SIZE);
}

double MaxElem(double* V) {
	double MaxE = V[0];
	for (int i = 1; i < SIZE; i++)
		if (MaxE < V[i]) MaxE = V[i];
	return MaxE;
}

void _10_ArrayPFnc() {
	double P[SIZE] = { 48.4,39.8,40.5,42.6,41.2 };
	cout << "�}�C P �������ȬO: " << Average(P) << endl;
	cout << "�}�C P ���̤j�ȬO: " << MaxElem(P) << endl;
	system("pause > nul");
}