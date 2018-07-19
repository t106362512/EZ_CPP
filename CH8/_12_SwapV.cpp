#include "stdafx.h"
using namespace std;

void DisplayV1(double* V, int N) {
	cout << endl;
	for (int i = 0; i < N; i++)
		cout << setw(5) << V[i] << " ";
	cout << endl;
}

void DisplayV2(double* V, int N) {
	cout << endl;
	for (int i = 0; i < N; i++)
		cout << setw(5) << *(V+i) << " ";
	cout << endl;
}

void Swap(double** x, double** y) {
	double* Temp;
	Temp = *x;
	*x = *y;
	*y = Temp;
	return;
}

void _12_SwapV() {

	const int SIZEA = 5, SIZEB = 7;
	double* A = new double[SIZEA];
	double* B = new double[SIZEB];
	for (int i = 0; i < SIZEA; i++)
		A[i] = 1.0*i;
	for (int i = 0; i < SIZEB; i++)
		B[i] = 3.0*i;

	cout << "���� Swap() �e, \n";
	cout << "A �O :\n";
	DisplayV1(A, SIZEA);
	cout << "B �O :\n";
	DisplayV1(B, SIZEB);

	Swap(&A, &B);

	cout << "���� Swap() ��, \n";
	cout << "A �O :\n";
	DisplayV1(A, SIZEB);
	cout << "B �O :\n";
	DisplayV1(B, SIZEA);

	//�R�����Ϊ��ʺA�O����(�S���۰ʦ^������A�ݤ��)
	//delete [] A,B == delete [] A; delete [] B;
	delete [] A,B;
	system("pause > nul");
}