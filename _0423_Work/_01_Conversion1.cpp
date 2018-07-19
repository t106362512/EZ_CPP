#include "stdafx.h"

using namespace std;

inline double itoc(double in) {
	return in * 2.54;
}

inline double ctoi(double cm) {
	return cm * 0.3937;
}

void _01_Conversion1() {
	int x;
	double inPut;
	cout << "1.英吋轉公分\t2.公分轉英寸\t3.結束: " ;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "請輸入要轉換的英吋數，輸入0則結束: "; cin >> inPut;
		if (inPut == 0) return;
		cout << inPut << " 英吋為 " << itoc(inPut) << "公分" << endl ;
		break;
	case 2:
		cout << "請輸入要轉換的公分數，輸入0則結束: "; cin >> inPut;
		if (inPut == 0) return;
		cout << inPut << " 公分為 " << ctoi(inPut) << "英吋" << endl;
		break;
	case 3: return;
	default: break;
	}
	system("pause > nul");
}
