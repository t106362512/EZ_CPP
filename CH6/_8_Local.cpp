#include "stdafx.h"
using namespace std;

void TestLocal() {

	int A = 1;
	static int S = 1;
	register int R = 1;
	cout << " A 的值是 " << A << endl;
	cout << " S 的值是 " << S << endl;
	cout << " R 的值是 " << R << endl;

	for (register int i = 0; i < 1000; i++)
		R += 2;
	cout << "計算後 R 的值是 " << R << endl;
	A++; S++; R++;

}

void _8_Local() {

	for (int i = 0; i <= 3; i++)
	{
		cout << "第 ( " << i << " ) 次: " << endl;
		TestLocal();
		cout << endl;
	}
	system("pause");
}

