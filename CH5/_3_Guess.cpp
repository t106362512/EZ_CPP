#include "stdafx.h"
using namespace std;

void _3_Guess() {
	
	char Guess, Secret1 = 'D', Secret2 = 'd';
	do {
		cout << "�п�@�ӱqA��E���r��:"; cin >> Guess;
	} while ((Guess != Secret1) && (Guess != Secret2));
	cout << "�A�q��F�A�N�O: " << Guess << endl;
	system("pause > nul");
}