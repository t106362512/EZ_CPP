#include "stdafx.h"
using namespace std;

void _7_Temp() {
	double c;
	cout << "  Äá¤ó  µØ¤ó  \n-----------------" << endl;
	for (int i = 1; i <= 10; i++)
	{
		c = 10.0*i;
		cout << setw(5) << c << " " << setw(5)
			<< c * 9.5 / 5.0 + 32.0 << endl;
	}
	cout << "-----------------" << endl;
	system("pause > nul");
}