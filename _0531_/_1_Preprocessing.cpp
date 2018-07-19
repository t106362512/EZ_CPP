#include "stdafx.h"
#define PI 3.14
using namespace std;

void peri(double), area(double);

void _1_Preprocessing() {

	double r = 1.0;
	cout << "pi = " << PI << endl;
	cout << "radius = " << r << endl;
	peri(r);
	area(r);
	system("pause");
}

void peri(double r) {
	cout << "peripheral length = " << 2 * PI*r << endl;
}

void area(double r) {
	cout << "area = " << PI * r*r << endl;
}