#include "stdafx.h";
using namespace std;

void _6_Watt() {
	int month, cp;
	float de = 0;
	cout << "�п�J���: "; cin >> month;
	cout << "�п�J�C��ιq�q: "; cin >> cp;

	if (month <= 12 && month >= 1) {
		if (month >= 6 && month <= 9) {
			if (cp > 0 && cp <= 120) de = 2.1;
			else if (cp > 120 && cp <= 330) de = 3.02;
			else if (cp > 330 && cp <= 500) de = 4.39;
			else if (cp > 500 && cp <= 700) de = 5.44;
			else if (cp > 700 && cp <= 1000) de = 6.16;
			else if (cp < 1000) de = 6.71;
		}
		else {
			if (cp > 0 && cp <= 120) de = 2.1;
			else if (cp > 120 && cp <= 330) de = 2.68;
			else if (cp > 330 && cp <= 500) de = 3.61;
			
				
			else if (cp > 500 && cp <= 700) de = 4.48;
			else if (cp > 700 && cp <= 1000) de = 5.03;
			else if (cp < 1000) de = 5.28;
		}
		cout << "�q�O = " << cp * de << " ��" << endl;
	} else cout << "��J���~" << endl;

	system("pause > nul");
}