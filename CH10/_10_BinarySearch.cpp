#include <ctime>
#include "stdafx.h"
using namespace std;

template<class T>
int BiSearch(T *V, int N, T Key) {
	int Left = 0, Right, Mid;
	Right = N - 1;
	
	while (Left <= Right)
	{
		Mid = (int)((Left + Right) / 2);
		if (Key == V[Mid]) return Mid;
		else if (Key > V[Mid])
			Left = Mid + 1;
		else
			Right = Mid - 1;
	}
	return -1;
}
// inline ��� RandI(),���� 1~N �������ü�
inline int RandI(int N) {
	return rand() % N + 1;
}

template<class T>
void Exchange(T& A, T& B) {
	T Temp;
	Temp = A;
	A = B;
	B = Temp;
}