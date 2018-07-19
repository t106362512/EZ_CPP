#include "stdafx.h"
using namespace std;

void C2F_1(double C, double& F) {
	F = C * 9.0 / 5.0 + 32.0;
	return ;
}

void _5_TempConv_2() {

	double CTemp, F;
	cout << "Äá¤ó\tµØ¤ó" << endl;
	cout << "===============" << endl;
	for (int i = 1; i <= 10; i++) {

		CTemp = 10.0 * i;
		C2F_1(CTemp, F);
		cout << setw(5) << CTemp << "\t"
			<< setw(5) << F <<endl;
	}
	system("pause");
}

