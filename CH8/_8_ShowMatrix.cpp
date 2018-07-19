#include "stdafx.h"
using namespace std;

void _8_ShowMatrix() {

	const int ROW = 2, COL = 3;
	double B[ROW][COL] = { 1.8,4.9,6.8,6.2,2.1,3.4 };
	int i, j;
	
	cout << "(1) °}¦C B ¬O: " << endl;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			cout << setw(5) << B[i][j];
		cout << endl;
	}
	cout << endl;
	
	cout << "(2) °}¦C B ¬O: " << endl;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			cout << setw(5) << *(B[i] + j);
		cout << endl;
	}
	cout << endl;

	cout << "(3) °}¦C B ¬O: " << endl;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++)
			cout << setw(5) << *(*(B + i) + j);
		cout << endl;
	}
	cout << endl;

	system("pause > nul");
}