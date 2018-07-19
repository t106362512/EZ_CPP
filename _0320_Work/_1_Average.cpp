#include "stdafx.h"
using namespace std;

void _1_Average() {

	float CH,ENG,MATH,aver;
	char Lv;
	cout << "請輸入國_英_數三科成績:";
	cin >> CH >> ENG >> MATH;
	aver = (CH + ENG + MATH)/3;
	switch ((int)aver/10)
	{
	case 10:case 9: Lv = 'A'; break;
	case 8: Lv = 'B'; break;
	case 7: Lv = 'C'; break;
	case 6: Lv = 'D'; break;
	default: Lv = 'F'; break;
	}
	cout <<"總分 = " << aver*3 <<"\t平均 = " << aver << "\t等級 " << Lv << endl;
	system("pause > nul");
}