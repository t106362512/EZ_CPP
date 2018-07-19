#include "stdafx.h"
#include <string>
using namespace std;

const char* findSeason(int);

void _14_StringSeason() {

	int n;
	cout << "\n請輸入一個月分: " << endl;
	cin >> n;
	cout << n << "月是" << findSeason(n) << endl;

	system("pause");
}

const char* findSeason(int month) {

	int n;
	const char* seasons[] = { "冬季","春季","夏季","秋季" };
	if (month < 1 || month>12)
		return "你輸入的值沒有意義";
	n = (month % 12) / 3;
	return seasons[n];
}