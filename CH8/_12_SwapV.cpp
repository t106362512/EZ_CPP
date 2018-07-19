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

	cout << "執行 Swap() 前, \n";
	cout << "A 是 :\n";
	DisplayV1(A, SIZEA);
	cout << "B 是 :\n";
	DisplayV1(B, SIZEB);

	Swap(&A, &B);

	cout << "執行 Swap() 後, \n";
	cout << "A 是 :\n";
	DisplayV1(A, SIZEB);
	cout << "B 是 :\n";
	DisplayV1(B, SIZEA);

	//刪除不用的動態記憶體(沒有自動回收機制，需手動)
	//delete [] A,B == delete [] A; delete [] B;
	delete [] A,B;
	system("pause > nul");
}