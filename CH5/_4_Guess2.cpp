#include "stdafx.h"
using namespace std;

void _4_Guess2() {

	char Guess = 'z', Secret1 = 'D', Secret2 = 'd';
	while ((Guess != Secret1) && (Guess != Secret2)) {
		cout << "�п�@�ӱqA��E���r��:"; cin >> Guess;
	 }
	cout << "�A�q��F�A�N�O: " << Guess << endl;
	system("pause > nul");
}