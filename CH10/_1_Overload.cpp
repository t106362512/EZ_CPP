#include "stdafx.h"
using namespace std;

double Max(double, double);
double Max(double, double, double);

void _1_Overload() {
	double a = 5.0, b = 6.0, c = 7.0;
	cout << "Max(a, b)\t���ȬO: " << Max(a, b) << endl;
	cout << "Max(a, b, c)\t���ȬO: " << Max(a, b, c) << endl;

	system("pause > nul");
}

double Max(double x, double y) { return (x >= y) ? x : y; }

double Max(double x, double y, double z) {
	double Temp = x;
	if (x < y) Temp = y;
	if (Temp < z)Temp = z;
	return Temp;
}