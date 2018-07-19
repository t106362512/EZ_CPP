#include "stdafx.h"
using namespace std;

void _3_triangle() {

	for (int x = 1; x <= 5; x++){

		for (int y = 1; y <= x; y++)
			cout << setw(3) << x;
		cout << endl;
	}
	system("pause > nul");
}

