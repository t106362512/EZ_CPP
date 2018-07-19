#include "stdafx.h"
using namespace std;

void _7_Area() {
	int cp;
	float x1,x2;
	const double PI = 3.141592;
	cout << "1.圓\t2.矩形\t3.三角形\t4.結束: "; cin >> cp;

	switch (cp)
	{
	case 1: 
		cout << "請輸入半徑r: "; cin >> x1;
		cout << "圓面積 = " << x1 * x1 * PI << endl;
		break;
	case 2:
		cout << "請輸入矩形二邊邊長，以空白隔開: "; cin >> x1 >> x2;
		cout << "矩形面積 = " << x1 * x2 << endl; break;
	case 3:
		cout << "請輸入三角形底與高，以空白隔開: "; cin >> x1 >> x2;
		cout << "矩形面積 = " << (x1 * x2) / 2 << endl; break;
	default: cout << "輸入錯誤" << endl; break;
	}
	system("pause > nul");
}