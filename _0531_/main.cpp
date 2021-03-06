// main.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _1_Preprocessing();
extern void _2_Define();
extern void _3_Const();
extern void _4_Define1();
extern void _5_Define2();
extern void _6_Define3();
extern void _7_Define4();
extern void _8_Define_ifdef();
extern void _9_Define_Head();
extern void _10_Define_ifdef1();
extern void _11_Define_ifdef2();
extern void _12_Define_Un();
extern void _13_Define_ifndef3();
extern void _14_Define_if();
extern void _15_Define_ifdef4();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(40) << "0.離開" << endl;
		cout << setw(40) << "_1_Preprocessing" << endl;
		cout << setw(40) << "_2_Define" << endl;
		cout << setw(40) << "_3_Const" << endl;
		cout << setw(40) << "_4_Define1" << endl;
		cout << setw(40) << "_5_Define2" << endl;
		cout << setw(40) << "_6_Define3" << endl;
		cout << setw(40) << "_7_Define4" << endl;
		cout << setw(40) << "_8_Define_ifdef" << endl;
		cout << setw(40) << "_9_Define_Head" << endl;
		cout << setw(40) << "_10_Define_ifdef1" << endl;
		cout << setw(40) << "_11_Define_ifdef2" << endl;
		cout << setw(40) << "_12_Define_Un" << endl;
		cout << setw(40) << "_13_Define_ifndef3" << endl;
		cout << setw(40) << "_14_Define_if" << endl;
		cout << setw(40) << "_15_Define_ifdef4" << endl;

		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _1_Preprocessing(); break;
		case 2: _2_Define(); break;
		case 3: _3_Const(); break;
		case 4: _4_Define1(); break;
		case 5: _5_Define2(); break;
		case 6: _6_Define3(); break;
		case 7: _7_Define4(); break;
		case 8: _8_Define_ifdef(); break;
		case 9: _9_Define_Head(); break;
		case 10: _10_Define_ifdef1(); break;
		case 11: _11_Define_ifdef2(); break;
		case 12: _12_Define_Un(); break;
		case 13: _13_Define_ifndef3(); break;
		case 14: _14_Define_if(); break;
		case 15: _15_Define_ifdef4(); break;

		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

