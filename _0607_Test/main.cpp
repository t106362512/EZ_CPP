// main.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h" //利用此大型IDE的特性，可加速編譯大型CODE
using namespace std;

extern void _01_();
extern void _02_();
extern void _03_();
extern void _04_();
extern void _05_();
extern void _06_();
extern void _07_();
extern void _08_();
extern void _09_();
extern void _10_();

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
		cout << setw(60) << "_04_" << endl;
		cout << setw(60) << "_05_" << endl;
		cout << setw(60) << "_06_" << endl;
		cout << setw(60) << "_07_" << endl;
		cout << setw(60) << "_08_" << endl;
		cout << setw(60) << "_09_" << endl;
		cout << setw(60) << "_10_" << endl;

		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1:_01_(); break;
		case 2:_02_(); break;
		case 3:_03_(); break;
		case 4:_04_(); break;
		case 5:_05_(); break;
		case 6:_06_(); break;
		case 7:_07_(); break;
		case 8:_08_(); break;
		case 9:_09_(); break;
		case 10:_10_(); break;

		default:
			cout << setw(60) << "No Value" << endl;
			system("pause");
			break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}


