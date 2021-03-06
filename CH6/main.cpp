// _0308_Work.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _1_TempConv();
extern void _2_TempConv_1();
extern void _3_SeasonsFnc();
extern void _4_Alias();
extern void _5_TempConv_2();
extern void _6_Swap();
extern void _7_Inline();
extern void _8_Local();
extern void _9_Global();
extern void _10_ExternA();


int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(40) << "0.離開" << endl;
		cout << setw(40) << "1.溫度轉換1" << endl;
		cout << setw(40) << "2.溫度轉換2" << endl;
		cout << setw(40) << "3.季節函數" << endl;
		cout << setw(40) << "4.別名&" << endl;
		cout << setw(40) << "5.溫度轉換3" << endl;
		cout << setw(40) << "6.數值交換" << endl;
		cout << setw(40) << "7.溫度轉換_Inline" << endl;
		cout << setw(40) << "8.變數1" << endl;
		cout << setw(40) << "9.變數2" << endl;
		cout << setw(40) << "10.變數3" << endl;
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _1_TempConv(); break;
		case 2: _2_TempConv_1(); break;
		case 3: _3_SeasonsFnc(); break;
		case 4: _4_Alias(); break;
		case 5: _5_TempConv_2(); break;
		case 6: _6_Swap(); break;
		case 7: _7_Inline(); break;
		case 8: _8_Local(); break;
		case 9: _9_Global(); break;
		case 10: _10_ExternA(); break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

