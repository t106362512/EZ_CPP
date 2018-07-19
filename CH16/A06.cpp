#include "stdafx.h"
#include <string>
using namespace std;

struct MyData
{
	string name;
	int math;
};
void RegionVar(MyData);

void A06() {

	MyData y = { "YY",12 };
	cout << y.name << " (y) Math score is " << y.math << endl;
	cout << "========RegionVar========" << endl;
	cout << "RegionVar(y)" ; RegionVar(y);
	cout << "Left RegionVar: " << y.math << endl;
	system("pause");
}

void RegionVar(MyData a) {

	a.math += 10;
	cout << a.math << endl;
}