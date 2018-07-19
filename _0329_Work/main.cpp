// _0308_Work.cpp: 定義主控台應用程式的進入點。

#include "stdafx.h"

using namespace std;

extern void _1_diamond();
extern void _2_diamond2();
extern void _3_triangle();
extern void _4_triangle2();
extern void _5_mul();
extern void _6_Guess();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(20) << "0.離開" << endl;
		cout << setw(20) << "1.菱形1" << endl;
		cout << setw(20) << "2.菱形2" << endl;
		cout << setw(20) << "3.三角形1" << endl;
		cout << setw(20) << "4.三角形2" << endl;
		cout << setw(20) << "5.九九乘法表" << endl;
		cout << setw(20) << "6.猜數字" << endl;
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _1_diamond(); break;
		case 2: _2_diamond2(); break;
		case 3: _3_triangle(); break;
		case 4: _4_triangle2(); break;
		case 5: _5_mul(); break;
		case 6: _6_Guess(); break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

