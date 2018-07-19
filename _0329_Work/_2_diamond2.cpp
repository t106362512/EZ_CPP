#include "stdafx.h"
using namespace std;

void _2_diamond2() {

	for (int x = -3; x <= 3; x++){

		cout << setw(abs(x) + 1);
		for (int y = 1; y <= 4 - abs(x); y++)
			cout << abs(abs(x) - 4) << " ";	
		cout << endl;
	}
	system("pause > nul");
}