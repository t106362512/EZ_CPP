#include "stdafx.h"
#include <string>
using namespace std;

const char* findSeason(int);

void _14_StringSeason() {

	int n;
	cout << "\n�п�J�@�Ӥ��: " << endl;
	cin >> n;
	cout << n << "��O" << findSeason(n) << endl;

	system("pause");
}

const char* findSeason(int month) {

	int n;
	const char* seasons[] = { "�V�u","�K�u","�L�u","��u" };
	if (month < 1 || month>12)
		return "�A��J���ȨS���N�q";
	n = (month % 12) / 3;
	return seasons[n];
}