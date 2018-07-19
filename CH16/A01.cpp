#include "stdafx.h"
using namespace std;
struct Time
{
	int hour;
	int minute;
	int second;
};

void A01(void) {

	Time midnight;
	midnight.hour = 12;
	midnight.minute = 22;
	midnight.second = 32;
	cout << "Midnight standard time:";
	cout <<setw(2)<<setfill('0')<< midnight.hour << ':' << midnight.minute << ':' << midnight.second << endl;
	system("pause");
}