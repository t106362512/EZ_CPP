#include <stdlib.h>
#include<iomanip>
#include <iostream>
#include <time.h>

using namespace std;

void showtime( int h, int m,int s)
{
	cout << h << ":" << m << ":" << s << endl;
}

void _5_Time()
{
    int h, m, s;
	time_t t = time(0);
    tm *local = localtime(&t);
	cout << "請輸入目前時間(hh mm ss): " ;
	cin >> h >> m >> s;

	showtime(h,m,s);
    showtime(local->tm_hour,local->tm_min,local->tm_sec);

	system("PAUSE > nul");
}
