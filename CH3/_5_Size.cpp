#include "stdafx.h"
#include <conio.h>

using namespace std;

void _5_Size() {

	int a = 5;
	cout << "Size of int is\t\t" << sizeof(int) << " bytes" << endl;
	cout << "Size of short is\t" << sizeof(short) << " bytes" << endl;
	cout << "Size of (a + 3.8f) is\t" << sizeof(a + 3.8f) << " bytes" << endl;
	system("pause > nul");
}