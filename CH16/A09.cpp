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

	Date newyear = { "�s�~",1,1 };
	Date woman = { "���k�`",3,8 };
	prnDate(&newyear);
	prnDate(&woman);
	system("pause");
}

void prnDate(Date *ptr) {
	cout << setw(2) << setfill('0') << ptr->Seasion << " �O " << ptr->month << " �� " << ptr->day << " �� " << endl;
	return;
}