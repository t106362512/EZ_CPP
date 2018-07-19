#include "stdafx.h"
using namespace std;

inline double C2F_2(double C) {
	return C * 9.0 / 5.0 + 32.0;;
}

void _7_Inline() {

	double CTemp;
	cout << "Äá¤ó\tµØ¤ó" << endl;
	cout << "===============" << endl;
	for (int i = 1; i <= 10; i++) {

		CTemp = 10.0 * i;
		cout << setw(5) << CTemp << "\t"
			<< setw(5) << C2F_2(CTemp) << endl;
	}
	system("pause");
}

