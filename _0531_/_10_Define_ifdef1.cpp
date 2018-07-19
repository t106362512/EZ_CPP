#include "stdafx.h"
//#define MAX_SIZE 10
using namespace std;

void _10_Define_ifdef1() {

	int n;
	#ifdef MAX_SIZE
		int ix[MAX_SIZE];
		n = MAX_SIZE;
	#else
		int *ix;
		cout << "Plz enter the established array size: " << endl;
		cin >> n;
		ix = new int[n];
	#endif // MAX_SIZE
	cout << "array " << n << " element" << endl;
	system("pause");
}