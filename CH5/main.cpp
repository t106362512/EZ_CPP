// _0308_Work.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _1_Sum();
extern void _2_Sum2();
extern void _3_Guess();
extern void _4_Guess2();
extern void _5_SumFor();
extern void _6_CandB();
extern void _7_Temp();
extern void _8_DisIntM();
extern void _9_while100();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(40) << "0.離開" << endl;
		cout << setw(40) << "1.累加1" << endl;
		cout << setw(40) << "2.累加2" << endl;
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
		case 1: _1_Sum(); break;
		case 2: _2_Sum2(); break;
		case 3: _3_Guess(); break;
		case 4: _4_Guess2(); break;
		case 5: _5_SumFor(); break;
		case 6: _6_CandB(); break;
		case 7: _7_Temp(); break;
		case 8: _8_DisIntM(); break;
		case 9: _9_while100(); break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

