// main.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h" //利用此大型IDE的特性，可加速編譯大型CODE
using namespace std;

extern void _01_();
extern void _02_();
extern void _03_();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(std::ios::internal, std::ios::adjustfield);//使用iomanip，設置cout出來字的位置。
		cout << setw(60) << "0.離開" << endl;
		cout << setw(60) << "_01_" << endl;
		cout << setw(60) << "_02_" << endl;
		cout << setw(60) << "_03_" << endl;
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1:
			_01_();
			break;
		case 2:
			_02_();
		case 3:
			_03_();

		default:
			cout << setw(60) << "0.離開" << endl;
			system("pause");
			break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}


