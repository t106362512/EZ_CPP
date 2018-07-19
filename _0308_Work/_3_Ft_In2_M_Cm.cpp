#include <iostream>

using namespace std;

void _3_Ft_In2_M_Cm() {

	float ft, inch;
	cout << "請輸入英呎:";
	cin >> ft;
	cout << "請輸入英吋:";
	cin >> inch;
	cout << ft << " 英吋為 "
		<< ft * 0.3048 << "公尺" << endl;
	cout << inch << " 英吋為 "
		<< inch * 2.54 << "公分";
	system("pause > nul");
}