#include <ctime>
#include "stdafx.h"
using namespace std;

template<class T>
int LinSearch(T *V, int N, T Key) {
	for (int i = 0; i < N; i++) {
		if (V[i] == Key) return i;
	}
	return -1;
}
//定義 inline 函數 RandI() 產生 1~N 之間的亂數
inline int RandI(int N) { return rand() % N + 1; }

void _9_LinarSearch() {
	int Index, Key = 32;
	srand(int(time(0))); //randomize();
	const int Size = 20;
	int Data[Size];
	for (int i = 0; i < 20; i++)
		Data[i] = RandI(85); //隨機產生D[i]
	cout << "\nData 的值是:" << endl;
	for (int i = 0; i < Size; i++)
	{
		cout << setw(10) << Data[i];
		if (i % 5 == 4)cout << endl;
	}
	Index = LinSearch(Data, Size, Key);
	if (Index > -1)
		cout << Key << " 在第 " << Index + 1 << " 個元素的地方." << endl;
	else
		cout << "找不到 " << Key << endl;
	system("pause");
}