#include "stdafx.h"
using namespace std;

void _4_Guess2() {

	char Guess = 'z', Secret1 = 'D', Secret2 = 'd';
	while ((Guess != Secret1) && (Guess != Secret2)) {
		cout << "請輸一個從A至E的字母:"; cin >> Guess;
	 }
	cout << "你猜對了，就是: " << Guess << endl;
	system("pause > nul");
}