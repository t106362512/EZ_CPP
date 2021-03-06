// main.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _01_TestStruct();
extern void _02_StructArray();
extern void _03_StructFnc();
extern void _04_StructFnc2();
extern void _05_ListStruct();
extern void A01();
extern void A02();
extern void A03();
extern void A04();
extern void A05();
extern void A06();
extern void A07();
extern void A08();
extern void A09();
extern void A10();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setfill(' ') << setw(40) << "0.離開" << endl;
		cout << setw(40) << "_01_TestStruct" << endl;
		cout << setw(40) << "_02_StructArray" << endl;
		cout << setw(40) << "_03_StructFnc" << endl;
		cout << setw(40) << "_04_StructFnc2" << endl;
		cout << setw(40) << "_05_ListStruct" << endl;
		cout << setw(40) << "_06_A01" << endl;
		cout << setw(40) << "_07_A02" << endl;
		cout << setw(40) << "_08_A03" << endl;
		cout << setw(40) << "_09_A04" << endl;
		cout << setw(40) << "_10_A05" << endl;
		cout << setw(40) << "_11_A06" << endl;
		cout << setw(40) << "_12_A07" << endl;
		cout << setw(40) << "_13_A08" << endl;
		cout << setw(40) << "_14_A09" << endl;
		cout << setw(40) << "_15_A10" << endl;
		cout << setw(40) << "_16_A11" << endl;
		cout << setw(40) << "_17_A12" << endl;




		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _01_TestStruct(); break;
		case 2: _02_StructArray(); break;
		case 3: _03_StructFnc(); break;
		case 4: _04_StructFnc2(); break;
		case 5: _05_ListStruct(); break;
		case 6: A01(); break;
		case 7: A02(); break;
		case 8: A03(); break;
		case 9: A04(); break;
		case 10: A05(); break;
		case 11: A06(); break;
		case 12: A07(); break;
		case 13: A08(); break;
		case 14: A09(); break;
		case 15: A10(); break;

		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

