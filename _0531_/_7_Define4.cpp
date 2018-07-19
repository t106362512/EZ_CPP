#include "stdafx.h"
#define MAX(a,b) ((a)>(b)?(a):(b)) 
#define MIN(b,a) ((a)>(b)?(a):(b)) 
using namespace std;

void _7_Define4() {

	int a, b;
	cout << "Input a and b: " << endl;
	cin >> a >> b;
	cout << "MAX(a + 2, b + 3) = " << MAX(a + 2, b + 3) << endl;
	cout << "MIN(a + 2, b + 3) = " << MIN(a + 2, b + 3) << endl;
	system("pause");
}