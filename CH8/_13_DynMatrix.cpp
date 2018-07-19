#include <new>
#include "stdafx.h"
using namespace std;

const int m = 2, n = 3;

void ShowMatrix(double **);
double MatrixAvg(double **);
void Sum(double **, double **, double **);
void LackMemory() {
	cerr << "記憶體不足!\n";
	abort();
}

void _13_DynMatrix() {

	//動態記憶體配置 pMa
	set_new_handler(LackMemory);
	double **pMa = new double *[m];
	for (int i = 0; i < m; i++)
		pMa[i] = new double[n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			pMa[i][j] = (i*i + 2.0*j) / 2.0;

	//動態記憶體配置 pMb
	double **pMb = new double *[m];
	pMb[0] = new double[m*n];

	for (int i = 1; i < m; i++)
		pMb[i] = pMb[i - 1] + n;

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			pMa[i][j] = (i + j) / 2.0;

	//動態記憶體配置 pMc
	double **pMc = new double *[m];
	pMc[0] = new double[m*n];

	for (int i = 1; i < m; i++)
		pMc[i] = pMc[i - 1] + n;

	//顯示 pMa 和pMb
	cout << "陣列 pMa 是: " << endl;
	ShowMatrix(pMa);
	cout << "陣列 pMb 是: " << endl;
	ShowMatrix(pMb);
	//求 pMc
	Sum(pMa, pMb, pMc);
	cout << "陣列 pMa + pMb 是: " << endl;
	ShowMatrix(pMc);
	//求 pMa 的平均值
	cout << "陣列 pMa 的平均值是: " << MatrixAvg(pMa) << endl;

	//回收 pMa
	for (int i = 0; i < m; i++)
		delete[] pMa[i];
	delete[] pMa;
	//回收 pMb
	delete[] pMb[0];
	delete[] pMb;
	//回收 pMc
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