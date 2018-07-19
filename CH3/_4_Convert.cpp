#include "stdafx.h"

using namespace std;

void _4_Convert() {

	int y,a = 5;
	float x;
	x = a + 3.8; // a和3.8會自動被轉為double，會後再轉為float。
	y = a + 3.8f; // a和3.8會自動被轉為float，會後再轉為int。
	cout << "X的值為:" << x << endl;
	cout << "Y的值為:" << y << endl;
	system("pause > nul");
}