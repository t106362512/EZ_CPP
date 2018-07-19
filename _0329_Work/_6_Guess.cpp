#include "stdafx.h"
#include <random>
using namespace std;
void _6_Guess() {

	int A = 100, B = 1, guess = 0, pw;
	cout << "請輸入通關密碼 1 ~ 100 :";cin >> pw;
	while (guess != pw){
		cout << "請猜通關密碼 (" << B << "~" << A << "): ";
		cin >> guess;
		if (guess >= B && guess <= pw) B = guess;
		if (guess <= A && guess >= pw) A = guess;
	} 
	cout << "中了!" << endl;
	system("pause > nul");
}
