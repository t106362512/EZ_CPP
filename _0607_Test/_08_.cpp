#include "stdafx.h"
#define MAX(a,b,c) ( (a>b) ? (a>c?a:c) : (b>c?b:c) )
#define MIN(a,b,c) ( (a<b) ? (a<c?a:c) : (b<c?b:c) )
using namespace std;

void _08_() {

	int a, b, c;
	cout << "�п�J�T�Ӿ�ơA�H�ťչj�}: " << endl;
	cin >> a >> b >> c;
	cout << a << "," << b << "," << c << " �����j�ȬO" << MAX(a, b, c) << endl;
	cout << a << "," << b << "," << c << " �����p�ȬO" << MIN(a, b, c) << endl;
	system("pause");
}