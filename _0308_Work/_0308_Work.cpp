// _0308_Work.cpp: 定義主控台應用程式的進入點。
//

#include <iostream>
#include <iomanip>

using namespace std;

extern void _1_In2Cm();
extern void _2_Cm2In();
extern void _3_Ft_In2_M_Cm();
extern void _4_Kg_m_BMI();
extern void _5_Lb_In_BMI();
extern void _6_Size();
extern void _7_If();
int main() {

	int input;
	do
	{
		system("CLS");
		cout.setf(std::ios::internal, std::ios::adjustfield); //使用iomanip，設置cout出來字的位置。
		cout << setw(40) << "0.離開" << endl;
		cout << setw(40) << "1.英吋轉公分" << endl;
		cout << setw(40) << "2.公分轉英寸" << endl;
		cout << setw(40) << "3.輸入英呎與英吋轉換成公尺與公分" << endl;
		cout << setw(40) << "4.BMI(公尺/公斤)" << endl;
		cout << setw(40) << "5.BMI(英呎/磅)" << endl;
		cout << setw(40) << "6.查看資料型態" << endl;
		cout << setw(40) << "7.比大小" << endl;
		cin >> input;
		while (getchar() != '\n');
		cout.flush();
		switch (input)
		{
		case 0:	break;
		case 1:
			_1_In2Cm();
			break;
		case 2:
			_2_Cm2In();
			break;
		case 3:
			_3_Ft_In2_M_Cm();
			break;
		case 4:
			_4_Kg_m_BMI();
			break;
		case 5:
			_5_Lb_In_BMI();
			break;
		case 6:
			_6_Size(); 
			break;
		case 7:
			_7_If();
			break;
		default:
			cout << setw(60) << "No Value" << endl;
			system("pause > nul");
			break;
		}

	} while (input != 0);

	return EXIT_SUCCESS;
}

