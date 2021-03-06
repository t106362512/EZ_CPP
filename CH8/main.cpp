// main.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _1_Variable();
extern void _2_Ref();
extern void _3_OnePointer();
extern void _4_TwoPointer();
extern void _5_ThreePointer();
extern void _6_ConstPointer();
extern void _7_Apointer();
extern void _8_ShowMatrix();
extern void _9_Swap2F();
extern void _10_ArrayPFnc();
extern void _11_FncPoint();
extern void _12_SwapV();
extern void _13_DynMatrix();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(40) << "0.離開" << endl;
		cout << setw(40) << "_1_Variable" << endl;
		cout << setw(40) << "_2_Ref" << endl;
		cout << setw(40) << "_3_OnePointer" << endl;
		cout << setw(40) << "_4_TwoPointer" << endl;
		cout << setw(40) << "_5_ThreePointer" << endl;
		cout << setw(40) << "_6_ConstPointer" << endl;
		cout << setw(40) << "_7_Apointer" << endl;
		cout << setw(40) << "_8_ShowMatrix" << endl;
		cout << setw(40) << "_9_Swap2F" << endl;
		cout << setw(40) << "_10_ArrayPFnc" << endl;
		cout << setw(40) << "_11_FncPoint" << endl;
		cout << setw(40) << "_12_SwapV" << endl;
		cout << setw(40) << "_13_DynMatrix" << endl;		
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _1_Variable(); break;
		case 2: _2_Ref(); break;
		case 3: _3_OnePointer(); break;
		case 4: _4_TwoPointer(); break;
		case 5: _5_ThreePointer(); break;
		case 6: _6_ConstPointer(); break;
		case 7: _7_Apointer(); break;
		case 8: _8_ShowMatrix(); break;
		case 9: _9_Swap2F(); break;
		case 10: _10_ArrayPFnc(); break;
		case 11: _11_FncPoint(); break;
		case 12: _12_SwapV(); break;
		case 13: _13_DynMatrix(); break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

