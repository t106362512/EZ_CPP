// main.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h" //利用此大型IDE的特性，可加速編譯大型CODE
using namespace std;

extern void _1_Int();
extern void _2_Float();
extern void _3_Average();
extern void _4_Convert();
extern void _5_Size();
extern void _6_Power3();
extern void _7_BoolCheck();
extern void _8_StringSize();
extern void _9_BitOp();

int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(std::ios::internal, std::ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(60) << "0.離開" << endl;
		cout << setw(60) << "1.看整數" << endl;
		cout << setw(60) << "2.看浮點數" << endl;
		cout << setw(60) << "3.算平均值" << endl;
		cout << setw(60) << "4.看值強制自動轉換" << endl;
		cout << setw(60) << "5.看資料型態大小" << endl;
		cout << setw(60) << "6.X值的三次方" << endl;
		cout << setw(60) << "7.查看布林值" << endl;
		cout << setw(60) << "8.驗證字串的儲存" << endl;
		cout << setw(60) << "9.位元處理程式" << endl;
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1:
			_1_Int();
			break;
		case 2:
			_2_Float();
			break;
		case 3:
			_3_Average();
			break;
		case 4:
			_4_Convert();
			break;
		case 5:
			_5_Size();
			break;
		case 6:
			_6_Power3();
			break;
		case 7:
			_7_BoolCheck();
			break;
		case 8:
			_8_StringSize();
			break;
		case 9:
			_9_BitOp();
			break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul");
			break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

