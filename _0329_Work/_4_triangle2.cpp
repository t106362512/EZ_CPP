#include "stdafx.h"
using namespace std;

void _4_triangle2() {

	for (int x = 5; x >= 1; x--){

		for (int y = 1; y <= x; y++)
			cout << setw(3) << 6 - x;
		cout << endl;
	}
	system("pause > nul");
}

