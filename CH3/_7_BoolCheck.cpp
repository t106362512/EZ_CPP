#include "stdafx.h"

using namespace std;

void _7_BoolCheck() {

	bool b1, b2, b3, b4;
	b1 = true;
	b2 = false;
	b3 = (3 > 1);
	b4 = (3 < 1);
	cout << "b1 =\t" << b1 << endl;
	cout << "b2 =\t" << b2 << endl;
	cout << "b3 (3 > 1) =\t" << b3 << endl;
	cout << "b4 (3 < 1) =\t" << b4 << endl;
	cout << "Size of bool is:\t" << sizeof(bool) << " byte" << endl;
	cout << "Size of b1 is:\t" << sizeof(b1) << " byte" << endl;
	system("pause > nul");
}