#include "stdafx.h"
#define NOT !
#define AND &&
#define OR ||
using namespace std;

void _4_Define1() {

	float a, b;
	a = 0.3, b = a * 0.6;
	cout << "((a > 0.5) AND (b < 0.7) OR (a > 0.2)) = " << ((a > 0.5) AND(b < 0.7) OR(a > 0.2)) << endl;
	cout << "NOT(a > b) = " << NOT(a > b) << endl;
	system("pause");
}