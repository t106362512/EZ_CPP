#include "stdafx.h"
#include <random>
using namespace std;
void _6_Guess() {

	int A = 100, B = 1, guess = 0, pw;
	cout << "�п�J�q���K�X 1 ~ 100 :";cin >> pw;
	while (guess != pw){
		cout << "�вq�q���K�X (" << B << "~" << A << "): ";
		cin >> guess;
		if (guess >= B && guess <= pw) B = guess;
		if (guess <= A && guess >= pw) A = guess;
	} 
	cout << "���F!" << endl;
	system("pause > nul");
}
