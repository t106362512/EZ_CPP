#include "stdafx.h"
#define MAX(a,b,c) ( (a>b) ? (a>c?a:c) : (b>c?b:c) )
#define MIN(a,b,c) ( (a<b) ? (a<c?a:c) : (b<c?b:c) )
using namespace std;

void _08_() {

	int a, b, c;
	cout << "請輸入三個整數，以空白隔開: " << endl;
	cin >> a >> b >> c;
	cout << a << "," << b << "," << c << " 的較大值是" << MAX(a, b, c) << endl;
	cout << a << "," << b << "," << c << " 的較小值是" << MIN(a, b, c) << endl;
	system("pause");
}