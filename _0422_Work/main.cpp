#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

extern void _1_Convert();
extern void _2_BallArea();
extern void _3_CubeArea();
extern void _4_Rectangle();
extern void _5_Time();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(ios::internal, ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(20) << "0.離開" << endl;
		cout << setw(20) << "1.公升/加侖轉換" << endl;
		cout << setw(20) << "2.球型體積面積" << endl;
		cout << setw(20) << "3.立方體體積面積" << endl;
		cout << setw(20) << "4.長方形" << endl;
		cout << setw(20) << "5.電子鐘" << endl;
		cin >> input;
		while (getchar() != '\n'); //Using stdio.h
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1: _1_Convert(); break;
		case 2: _2_BallArea(); break;
		case 3: _3_CubeArea(); break;
		case 4: _4_Rectangle(); break;
		case 5: _5_Time(); break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul"); break; //Using stdlib.h
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}
