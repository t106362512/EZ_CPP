#include "stdafx.h"
using namespace std;

void _4_Postage() {
	int cp, diff;
	cout << "�п�J�]�q���q(���:���J): "; cin >> cp;
	if (cp <= 20) diff = 5;
	else if (cp > 20 && cp <= 50) diff = 10;
	else if (cp > 50 && cp <= 100) diff = 15;
	else if (cp > 100 && cp <= 250) diff = 25;
	else if (cp > 250 && cp <= 500) diff = 45;	
	else if (cp > 500 && cp <= 1000) diff = 80;
	else if (cp > 1000 && cp <= 2000) diff = 130;
	cout << "�]�q�l�O = " << diff << " ��" << endl;
	system("pause > nul");
}