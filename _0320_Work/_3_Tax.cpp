#include "stdafx.h"
using namespace std;

void _3_Tax() {
	int cp, dif;
	float ds;
	cout << "請輸入綜合所得淨額: "; cin >> cp;
	if (cp <= 520000) ds = 0.05, dif = 0;
	else if (cp > 520000 && cp <= 1170000) ds = 0.12, dif = 36400;
	else if (cp > 1170000 && cp <= 2350000) ds = 0.20, dif = 130000;
	else if (cp > 2350000 && cp <= 4400000) ds = 0.30, dif = 365000;
	else ds = 0.40, dif = 805000;
	cout << "全年應納稅額 = " << (cp * ds) - dif << endl;
	system("pause > nul");
}