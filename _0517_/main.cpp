// main.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _1_CharSizeof(), _2_getline(), _3_Strcpy(), _4_Strcmp(), _5_Strcat(),
	_6_StringObj(), _7_StringObj1(), _8_StringObj2(), _9_StringObj3(), _10_StringObj4(),
	_11_StringObj5(),_12_StringPtr(),_13_StringPtr1(),_14_StringSeason(), _15_StringPtr3();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(40) << "0.離開" << endl;
		cout << setw(40) << "_1_CharSizeof" << endl;
		cout << setw(40) << "_2_getline" << endl;
		cout << setw(40) << "_3_Strcpy" << endl;
		cout << setw(40) << "_4_Strcmp" << endl;
		cout << setw(40) << "_5_Strcat" << endl;
		cout << setw(40) << "_6_StringObj" << endl;
		cout << setw(40) << "_7_StringObj1" << endl;
		cout << setw(40) << "_8_StringObj2" << endl;
		cout << setw(40) << "_9_StringObj3" << endl;
		cout << setw(40) << "_10_StringObj4" << endl;
		cout << setw(40) << "_11_StringObj5" << endl;
		cout << setw(40) << "_12_StringPtr" << endl;
		cout << setw(40) << "_13_StringPtr1" << endl;
		cout << setw(40) << "_14_StringSeason" << endl;
		cout << setw(40) << "_15_StringPtr3" << endl;

		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _1_CharSizeof(); break;
		case 2: _2_getline(); break;
		case 3: _3_Strcpy(); break;
		case 4: _4_Strcmp(); break;
		case 5: _5_Strcat(); break;
		case 6: _6_StringObj(); break;
		case 7: _7_StringObj1(); break;
		case 8: _8_StringObj2(); break;
		case 9: _9_StringObj3(); break;
		case 10: _10_StringObj4(); break;
		case 11: _11_StringObj5(); break;
		case 12: _12_StringPtr(); break;
		case 13: _13_StringPtr1(); break;
		case 14: _14_StringSeason(); break;
		case 15: _15_StringPtr3(); break;

		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

