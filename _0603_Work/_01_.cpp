#include "stdafx.h"
using namespace std;
void _01_() {
	int i, n;
	long x, t, t1;
	cout << "�п�J���ơG"; cin >> n;
	for (i = 1; i < n + 1; i++) {
		if (i == 0 || i == 1) {
			x = i;
			t = 0;
			t1 = 1;
		}
		else {
			x = t + t1;
			t = t1;
			t1 = x;
		}
		cout << x << " ";
	}
	system("pause");
	return;
}