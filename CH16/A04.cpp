#include "stdafx.h"
#include <string>
using namespace std;

struct MyData
{
	string name;
	int math;
}x;

void A04() {

	MyData y = { "XX",12 };
	x = y;
	cout << y.name << " (Y) Math score is " << y.math << endl;
	cout << x.name << " (X) Math score is " << x.math << endl;
	cout << "========Change========" << endl;
	x.name = "XChange";
	cout << "x.name = " << x.name << "\ny.name =  "<< y.name << endl;
	system("pause");
}