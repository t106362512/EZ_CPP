#include "stdafx.h"
using namespace std;

double Area(double Width, double Length = 12.0);

void _2_Default() {
	double A;
	A = Area(6.5);
	cout << "A is : " << A << endl;
	cout << "B is : " << Area(10,8) << endl;
	system("pause");
}

double Area(double Width, double Length){
	return Width * Length;
}