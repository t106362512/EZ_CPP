#include "stdafx.h"
using namespace std;

void _6_CandB() {

	for (int i = 2; i <= 20; cout << "C ", i+=2)
	{
		cout << i;
		if (i == 6) continue;
		cout << "A";
		if (i == 12) break;
		cout << "B";
	}
	cout << endl;
	system("pause > nul");
}