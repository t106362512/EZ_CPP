#include "stdafx.h"
using namespace std;

void _1_Average() {

	float CH,ENG,MATH,aver;
	char Lv;
	cout << "�п�J��_�^_�ƤT�즨�Z:";
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
	cout <<"�`�� = " << aver*3 <<"\t���� = " << aver << "\t���� " << Lv << endl;
	system("pause > nul");
}