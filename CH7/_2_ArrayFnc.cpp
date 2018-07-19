#include "stdafx.h"
using namespace std;

double Average(double X[], int M) {
	double Sum = 0;
	for (int i = 0; i < M; i++)
		Sum += X[i];
	return Sum / double(M);
}

double MaxElem(double Y[], int N) {
	double MaxE;
	MaxE = Y[0];
	for (int i = 0; i < N; i++)
		if (MaxE < Y[i]) MaxE = Y[i];
	return MaxE;
}

void _2_ArrayFnc() {
	const int Size = 5;
	double P[Size] = { 48.4,39.8,40.5,42.6,41.2 };
	P[0] = 3.2;
	P[3] = P[0] * 2.0;
	cout << "�}�C P �������ȬO: " << Average(P, Size) << endl;
	cout << "�}�C P ���̤j�ȬO: " << MaxElem(P, Size) << endl;
	system("pause > nul");
}