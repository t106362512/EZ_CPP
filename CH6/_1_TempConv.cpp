#include "stdafx.h"
using namespace std;

double C2F(double);
void _1_TempConv() {

	double CTemp;
	cout << "Äá¤ó\tµØ¤ó" << endl;
	cout << "===============" << endl;
	for (int i = 1; i <= 10; i++){

		CTemp = 10.0 * i;
		cout << setw(5) << CTemp << "\t"
			<< setw(5) << C2F(CTemp) << endl;		
	}
	system("pause");
}

double C2F(double C) {
	double F;
	F = C * 9.0 / 5.0 + 32.0;
	return F;
}