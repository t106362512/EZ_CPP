// main.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _01_Struct();
extern void _02_Struct_Overload();
extern void _03_Class();
extern void _04_Class_1();
extern void _05_Class_2();
extern void _06_Class_3();
extern void _07_Class_4();


int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setfill(' ') << setw(40) << "0.離開" << endl;
		cout << setw(40) << "_01_Struct" << endl;
		cout << setw(40) << "_02_Struct_Overload" << endl;
		cout << setw(40) << "_03_Class" << endl;
		cout << setw(40) << "_04_Class_1" << endl;
		cout << setw(40) << "_05_Class_2" << endl;
		cout << setw(40) << "_06_Class_3" << endl;
		cout << setw(40) << "_07_Class_4" << endl;
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
		case 1: _01_Struct(); break;
		case 2: _02_Struct_Overload(); break;
		case 3: _03_Class(); break;
		case 4: _04_Class_1(); break;
		case 5: _05_Class_2(); break;
		case 6: _06_Class_3(); break;
		case 7: _07_Class_4(); break;
		//case 8: A03(); break;
		//case 9: A04(); break;
		//case 10: A05(); break;
		//case 11: A06(); break;
		//case 12: A07(); break;
		//case 13: A08(); break;
		//case 14: A09(); break;
		//case 15: A10(); break;

		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

