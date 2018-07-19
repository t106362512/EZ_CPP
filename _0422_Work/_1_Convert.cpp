#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

double inValue,outValue;

void ltog()
{
	cout << "請輸入要轉換的公升數:" ;
	cin >> inValue;
	outValue = inValue * 0.264178;
	cout << inValue << " 公升 = " << outValue << " 加侖" << endl;
}

void gtol()
{
	cout << "請輸入要轉換的加侖數:" ;
	cin >> inValue;
	outValue = inValue * 3.78533;
	cout << inValue << "加侖=" << outValue << "公升" << endl;
}

void _1_Convert()
{
	int x;
	cout << "1.公升轉加侖 2.加侖轉公升 3.結束:" ;
	cin >> x;

	switch (x){

	case 1: ltog(); break;
	case 2: gtol(); break;
	case 3: return;
	default:
	    cout << "無此值" << endl;
	}

	system("PAUSE > nul");
}
