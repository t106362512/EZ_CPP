#include "stdafx.h"
#include "_9_head.h" //�i������|
using namespace std;

void _9_Define_Head() {
	
	int a, b;
	cout << "Plz input a and b: ";
	cin >> a >> b;
	cout << "CIRCLE(a) = " << CIRCLE(a) << endl;
	cout << "RECTANGLE(a,b) = " << RECTANGLE(a,b) << endl;
	cout << "TRIANGLE(a,b) = " << TRIANGLE(a,b) << endl;
	system("pause");
}