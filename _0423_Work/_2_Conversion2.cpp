#include "stdafx.h"

using namespace std;

void ftom()
{
	double foot, eng, y;
	int m;
	cout << "請輸入要轉換的英尺數:"; cin >> foot;
	cout << endl;
	m = foot * 0.3048;

	cout << "請輸入要轉換的英吋數:"; cin >> eng;
	cout << endl;
	y = eng * 2.54;

	cout << foot << "英尺" << eng << "英吋=" << m +  << "公尺" << y << "公分" << endl;
}


void mtof()
{
	double b, i, j;
	int d;
	cout << "請輸入要轉換的公尺數:";
	cin >> b;
	cout << endl;
	d = b * 3.28083;

	cout << "請輸入要轉換的公分數:";
	cin >> i;
	cout << endl;
	j = i * 0.3937;

	cout << b << "公尺" << i << "公分=" << d << "英尺" << j << "英吋" << endl;
}

void _01_Conversion1() {
	int x;
	double inPut;
	cout << "1.英吋轉公分\t2.公分轉英寸\t3.結束: ";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "請輸入要轉換的英吋數，輸入0則結束: ";
		cout << inPut << " 英吋為 " << itoc(inPut) << "公分" << endl;
		break;
	case 2:
		cout << "請輸入要轉換的公分數，輸入0則結束: "; cin >> inPut;
		cout << inPut << " 公分為 " << ctoi(inPut) << "英吋" << endl;
		break;
	case 3: return;
	default: break;
	}
	system("pause > nul");
}
