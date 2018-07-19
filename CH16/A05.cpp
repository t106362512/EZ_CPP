#include "stdafx.h"
using namespace std;
struct Time
{
	int hour;
	int minute;
	int second;
}breakfast,lunch;

void printTime(int h, int m, int s);

void A05(void) {

	breakfast = { 6,30,0 };
	lunch = { 12,0,0 };
	Time dinner = { 18,30,0 }, supper = { 22,00,0 };
	cout << "Breakfast: ";
	printTime(breakfast.hour, breakfast.minute, breakfast.second);
	cout << "lunch: ";
	printTime(lunch.hour, lunch.minute, lunch.second);
	cout << "dinner: ";
	printTime(dinner.hour, dinner.minute, dinner.second);
	cout << "supper: ";
	printTime(supper.hour, supper.minute, supper.second);

	system("pause");
}

void printTime(int h, int m, int s) {

	cout << ((h == 0) || (h == 12) ? 12 : (h % 12));
	cout << ':' << ((m < 10) ? "0" : "") << m;
	cout << ':' << ((s < 10) ? "0" : "") << s;
	cout << (h < 12 ? " AM" : " PM") << endl;
}