#include "stdafx.h"
using namespace std;

void _1_diamond() {

	for (int x = -3; x <= 3; x++)
	{
		for (int i = 0; i < abs(x); i++)
			cout << " ";
		for (int y = 1; y <= 7 - abs(x) * 2; y++)
			cout << "*";
		cout << endl;
	}
	system("pause > nul");
}