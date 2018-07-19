#include <new>
#include "stdafx.h"
using namespace std;

const int m = 2, n = 3;

void ShowMatrix(double **);
double MatrixAvg(double **);
void Sum(double **, double **, double **);
void LackMemory() {
	cerr << "�O���餣��!\n";
	abort();
}

void _13_DynMatrix() {

	//�ʺA�O����t�m pMa
	set_new_handler(LackMemory);
	double **pMa = new double *[m];
	for (int i = 0; i < m; i++)
		pMa[i] = new double[n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			pMa[i][j] = (i*i + 2.0*j) / 2.0;

	//�ʺA�O����t�m pMb
	double **pMb = new double *[m];
	pMb[0] = new double[m*n];

	for (int i = 1; i < m; i++)
		pMb[i] = pMb[i - 1] + n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			pMa[i][j] = (i + j) / 2.0;

	//�ʺA�O����t�m pMc
	double **pMc = new double *[m];
	pMc[0] = new double[m*n];

	for (int i = 1; i < m; i++)
		pMc[i] = pMc[i - 1] + n;

	//��� pMa �MpMb
	cout << "�}�C pMa �O: " << endl;
	ShowMatrix(pMa);
	cout << "�}�C pMb �O: " << endl;
	ShowMatrix(pMb);
	//�D pMc
	Sum(pMa, pMb, pMc);
	cout << "�}�C pMa + pMb �O: " << endl;
	ShowMatrix(pMc);
	//�D pMa ��������
	cout << "�}�C pMa �������ȬO: " << MatrixAvg(pMa) << endl;

	//�^�� pMa
	for (int i = 0; i < m; i++)
		delete[] pMa[i];
	delete[] pMa;
	//�^�� pMb
	delete[] pMb[0];
	delete[] pMb;
	//�^�� pMc
	delete[] pMc[0];
	delete[] pMc;

	system("pause");
}

void ShowMatrix(double **M){
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(5) << M[i][j];
		cout << endl;
	}
	cout << endl;
	return;
}

double MatrixAvg(double **M) {
	
	double Sum = 0;
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
			Sum += M[i][j];
	return Sum / double(m*n);
}

void Sum(double **X, double **Y, double **Z) {

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			Z[i][j] = X[i][j] + Y[i][j];
	return;
}