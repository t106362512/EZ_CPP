// _0308_Work.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _1_Average();
extern void _2_Discount();
extern void _3_Tax();
extern void _4_Postage();
extern void _5_Water();
extern void _6_Watt();
extern void _6_1_Watt();
extern void _7_Area();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(std::ios::internal, std::ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(40) << "0.離開" << endl;
		cout << setw(40) << "1.國英數成績" << endl;
		cout << setw(40) << "2.買電腦享折扣" << endl;
		cout << setw(40) << "3.2017年所得稅" << endl;
		cout << setw(40) << "4.計算普通小包郵資費" << endl;
		cout << setw(40) << "5.計算每月抄表水費" << endl;
		cout << setw(40) << "6.計算夏月或非夏月電費" << endl;
		cout << setw(40) << "61.計算夏月或非夏月電費" << endl;
		cout << setw(40) << "7.計算面積" << endl;
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _1_Average(); break;
		case 2: _2_Discount(); break;
		case 3: _3_Tax(); break;
		case 4: _4_Postage(); break;
		case 5: _5_Water(); break;
		case 6: _6_Watt(); break;
		case 61: _6_1_Watt(); break;
		case 7: _7_Area(); break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

