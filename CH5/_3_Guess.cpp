#include "stdafx.h"
using namespace std;

void _3_Guess() {
	
	char Guess, Secret1 = 'D', Secret2 = 'd';
	do {
		cout << "請輸一個從A至E的字母:"; cin >> Guess;
	} while ((Guess != Secret1) && (Guess != Secret2));
	cout << "你猜對了，就是: " << Guess << endl;
	system("pause > nul");
}