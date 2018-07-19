// _0308_Work.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _1_Array();
extern void _2_ArrayFnc();
extern void _3_Fibo();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(40) << "0.離開" << endl;
		cout << setw(40) << "_1_Array" << endl;
		cout << setw(40) << "_2_ArrayFnc" << endl;
		cout << setw(40) << "3.猜數字1" << endl;
		cout << setw(40) << "4.猜數字2" << endl;
		cout << setw(40) << "5.累加_For迴圈" << endl;
		cout << setw(40) << "6.For迴圈_continue_break" << endl;
		cout << setw(40) << "7.溫度轉換" << endl;
		cout << setw(40) << "8.矩陣" << endl;
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _1_Array(); break;
		case 2: _2_ArrayFnc(); break;
		case 3: _3_Fibo(); break;
		//case 4: _4_Alias(); break;
		//case 5: _5_TempConv_2(); break;
		//case 6: _6_Swap(); break;
		//case 7: _7_Inline(); break;
		//case 8: _8_Local(); break;
		//case 9: _9_Global(); break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

