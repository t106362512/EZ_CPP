#include "stdafx.h"
using namespace std;
void _4_Seasons() {
	int Month;
	cout << "\n請輸入一個月份："<<endl;
	cin >> Month;
	if (Month < 1 || Month>12)
		cout << "您輸入的月份沒有意義！" << endl;
	else
	{
		cout << Month << " 月是";
		switch ((Month%12)/3)
		{
		case 0:
			cout << "\"冬季\"" << endl;
			break;
		case 1:
			cout << "\"春季\"" << endl;
			break;

		case 2:
			cout << "\"夏季\"" << endl;
			break;

		case 3:
			cout << "\"秋季\"" << endl;
			break;
		default:
			cout << "???" << endl;
			break;
		}
	}

}