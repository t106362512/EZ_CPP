#include "stdafx.h"
using namespace std;

void _9_while100() {

	int sum1, sum2, i;
	sum1 = sum2 = i = 0;

	while (i <= 4) {
		i += 1;
		if (i % 2 == 0) sum1 += i;
		else if (i % 2 == 1) sum2 += i;
	}
	cout << "偶數總和: " << sum1 << endl;
	cout << "奇數總和: " << sum2 << endl;
	system("pause > nul");
}