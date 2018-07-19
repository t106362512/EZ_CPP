#include "stdafx.h"
#include <string>
using namespace std;

struct Date
{
	string Seasion;
	int month, day;
};
void prnDate(Date *ptr);

void A09() {

	Date newyear = { "新年",1,1 };
	Date woman = { "婦女節",3,8 };
	prnDate(&newyear);
	prnDate(&woman);
	system("pause");
}

void prnDate(Date *ptr) {
	cout << setw(2) << setfill('0') << ptr->Seasion << " 是 " << ptr->month << " 月 " << ptr->day << " 日 " << endl;
	return;
}