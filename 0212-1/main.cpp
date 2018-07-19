// main.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h" //利用此大型IDE的特性，可加速編譯大型CODE
using namespace std;

extern void _1_HelloWorld();
extern void _2_Sum();

int main(){

	int input;
	do
	{
		system("CLS");
		cout.setf(std::ios::internal, std::ios::adjustfield);//使用iomanip，設置cout出來字的位置。
		cout << setw(60) << "0.離開" << endl;
		cout << setw(60) << "1.第一隻C++程式" << endl;
		cout << setw(60) << "2.算總和" << endl;
		cout << setw(60) << "3.看整數" << endl;
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1:
			_1_HelloWorld();
			break;
		case 2:
			_2_Sum();
		default:
			cout << setw(60) << "0.離開" << endl;
			system("pause");
			break;
		}

	} while (input != 0);
	
    return EXIT_SUCCESS;
}


