#include "stdafx.h"
using namespace std;

void _5_mul() {

	cout << "x |\t";
	for (int z = 1; z <= 9; z++)
		cout << z << "\t";
	cout << "\n--------------------------------------------------------------------------" << endl;
	for (int x = 1; x <= 9; x++){

		cout << x << " |\t";
		for (int y = 1; y <= 9; y++) 
			cout << x * y << "\t";
		cout << endl;
	}
	system("pause > nul");
}

