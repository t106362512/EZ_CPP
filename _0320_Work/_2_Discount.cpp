#include "stdafx.h"
using namespace std;

void _2_Discount() {
	const float price = 39999;
	float cp,ds;
	cout << "�п�J�q�����ʼƶq: "; cin >> cp;
	if (cp < 10) ds = 100;
	else if (cp >= 10 && cp <= 19) ds = 90;
	else if (cp >= 20 && cp <= 49) ds = 80;
	else if (cp >= 50 && cp <= 99) ds = 70;
	else if (cp >= 100) ds = 60;
	cout << "�馩�� " << 100 - ds << " %�A�`�� = " << cp * (ds*0.01) * price << endl;
	system("pause > nul");
}