#include "stdafx.h"
using namespace std;
int sum(int n);
int s = 0;
void _07_() {
	cout << "99+97+95...+1 = " << sum(99) << endl;

	system("PAUSE");
}
int sum(int n) {
	if (s < n)s = n;
	if (n > 1) {
		s += n - 2;
		return sum(n - 2);
	}
	else
		return s;
}