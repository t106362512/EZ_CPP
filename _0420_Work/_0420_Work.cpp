// _0420_Work.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
using namespace std;

void showtime(int& a, int& b, int& c)
{
	cout << a << ":" << b << ":" << c << endl << endl;
}

int main()
{
    
	int h;
	
	int m;
	
	int s;
	
	cout << "輸入目前時間(hh mm ss)";
	cin >> h >> m >> s;

	showtime(h, m, s);
	int* hh = &h;
	int* mm = &m;
	int* ss = &s;
	showtime(*hh, *mm, *ss);

	cout << &h;

	system("PAUSE");
	system("time");
	return 0;
}







