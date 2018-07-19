#include <ctime>
#include "stdafx.h"
using namespace std;

template <class T>
void Exchange(T& A, T& B) {
	T Temp;
	Temp = A;
	A = B;
	B = Temp;
}

template <class T>
void Bubble(T *V,int N) {
	for (int i = 0; i < N; i++)
		for (int j = N - 1; j > i; j--)
			if (V[j] < V[j - 1])
				Exchange(V[j], V[j - 1]);
	return;
}

inline double Rand() {
	return double(rand()) / RAND_MAX;
}

void _8_Bubble() {
	srand(int(time(0)));
	const int Size = 20;
	double Data[Size];
	for (int i = 0; i < Size; i++)
		Data[i] = 10.0*Rand() - 5.0;
	cout << setiosflags(ios::right) << setiosflags(ios::fixed)
		<< setiosflags(ios::showpoint) << setprecision(4);
	cout << "\n執行 Bubble() 之前, Data 的值是:" << endl;
	for (int i = 0; i < Size; i++)
	{
		cout << setw(10) << Data[i];
		if (i % 5 == 4)cout << endl;
	}
	Bubble(Data, Size);
	cout << "\n執行 Bubble() 之後, Data 的值是:" << endl;
	for (int i = 0; i < Size; i++)
	{
		cout << setw(10) << Data[i];
		if (i % 5 == 4)cout << endl;
	}
	system("pause");
}