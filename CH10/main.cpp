// main.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _1_Overload();
extern void _2_Default();
extern void _3_Template();
extern void _4_TestDice();
extern void _5_TestRand();
extern void _6_Factorial();
extern void _7_GCD();
extern void _8_Bubble();
extern void _9_LinarSearch();


int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(40) << "0.離開" << endl;
		cout << setw(40) << "_1_Overload" << endl;
		cout << setw(40) << "_2_Default" << endl;
		cout << setw(40) << "_3_Template" << endl;
		cout << setw(40) << "_4_TestDice" << endl;
		cout << setw(40) << "_5_TestRand" << endl;
		cout << setw(40) << "_6_Factorial" << endl;
		cout << setw(40) << "_7_GCD" << endl;
		cout << setw(40) << "_8_Bubble" << endl;
		cout << setw(40) << "_9_LinarSearch" << endl;
		cout << setw(40) << "_10_ArrayPFnc" << endl;
		cout << setw(40) << "_11_FncPoint" << endl;
		cout << setw(40) << "_12_SwapV" << endl;
		cout << setw(40) << "_13_" << endl;
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _1_Overload(); break;
		case 2: _2_Default(); break;
		case 3: _3_Template(); break;
		case 4: _4_TestDice(); break;
		case 5: _5_TestRand(); break;
		case 6: _6_Factorial(); break;
		case 7: _7_GCD(); break;
		case 8: _8_Bubble(); break;
		case 9: _9_LinarSearch(); break;
		//case 10: _10_ArrayPFnc(); break;
		//case 11: _11_FncPoint(); break;
		//case 12: _12_SwapV(); break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

