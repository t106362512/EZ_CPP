#include "stdafx.h";
using namespace std;

void _5_Water() {
	const float base = 17.85; //17.5
	int cp;
	float diff,unPrice;
	cout << "�п�J�C��Τ��q: "; cin >> cp;

	if (cp > 0 && cp <= 10) unPrice = 7.35, diff = 0;
	else if (cp > 10 && cp <= 30) unPrice = 9.45, diff = 21;
	else if (cp > 30 && cp <= 50) unPrice = 11.55, diff = 84;
	else unPrice = 12.075, diff = 110.25;
	cout << "���O = " 
		<< base + (cp*unPrice) - diff 
		<< " ��" << endl;
	system("pause > nul");
}