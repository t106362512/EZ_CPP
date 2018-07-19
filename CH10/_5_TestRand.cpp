#include <ctime>
#include "stdafx.h"
using namespace std;

//定義 inline 函數 Rand() 產生 0 ~ 1 之間的亂數
inline double Rand() { return double(rand()) / RAND_MAX; }

void TestRand();
const int TestNum = 6000;

void _5_TestRand() {
	cout << right << fixed << showpoint << setprecision(4);
	TestRand();
	system("pause");
}

void TestRand() {
	int Freq[10];
	double Sum, Temp;
	//(1) 初始化
	srand(int(time(0)));
	for (int i = 0; i < 10; i++) Freq[i] = 0;
	//(2) 連試 20 次Rand
	cout << "連試 20 次 Rand(): " << endl;
	for (int i = 1; i <= 20; i++)
	{
		cout << setw(10) << Rand();
		if (i % 5 == 0) cout << endl;
	}
	cout << endl;
	//(3) 統計連試 TestNum 次的結果
	Sum = 0.0;
	for (int Roll = 0; Roll < TestNum; Roll++)
	{
		Temp = Rand();
		for (int i = 1; i <= 10; i++)
			if ((Temp <= i * 0.1) && (Temp > (i - 1)*0.1))
				Freq[i - 1]++;
		Sum += Temp;
	}

	cout << "範圍\t次數" << endl;
	cout << "---------------" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << ((i - 1)*0.1) << " < Rand() <= "
			<< (i*0.1) << setw(6) << Freq[i - 1] << endl;
	}
	cout << "---------------" << endl;	
	cout << "平均: " << Sum / double(TestNum) << endl;
	return;
}