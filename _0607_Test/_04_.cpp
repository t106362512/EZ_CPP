#include "stdafx.h"
#define pi 3.14159
using namespace std;

struct Circle
{
	int radius = 1;
};

inline double perimeter (double r) {
	return 2 * (pi*r);
}

inline double area (double r) {
	return pi*(r*r);
}

void _04_() {

	cout << "請輸入圓形的半徑(公分):" ;
	double N;
	cin >> N;
	Circle Ea = { N };
	cout << "圓周長 = " << perimeter(Ea.radius) << "公分" << endl;
	cout << "圓面積 = " << area(Ea.radius) << "平方公分" << endl;
	system("pause");
}