#include "stdafx.h";
using namespace std;

void _6_1_Watt() {
	int month, Deg;
	float de, cp;
	cout << "�п�J���: "; cin >> month;
	cout << "�п�J�C��ιq�q: "; cin >> Deg;

	
	if (month <= 12 && month >= 1) {
		if (month >= 6 && month <= 9) {
			if (Deg > 0 && Deg <= 120) cp = Deg * 2.1;
			else if (Deg > 120 && Deg <= 330)
				cp = (Deg - 120) * 3.02 + 120 * 2.1;
			else if (Deg > 330 && Deg <= 500)
				cp = (Deg - 330) * 4.39 + (330 - 120) * 3.02 + 120 * 2.1;
			else if (Deg > 500 && Deg <= 700)
				cp = (Deg - 500) * 5.44 + (500 - 330) * 4.39 + (330 - 120) * 3.02 + 120 * 2.1;
			else if (Deg > 700 && Deg <= 1000) 
				cp = (Deg - 700) * 6.16 + (700 - 500) * 5.44 + (500 - 330) * 4.39 + (330 - 120) * 3.02 + 120 * 2.1;
			else if (Deg > 1000) 
				cp = (Deg - 1000) * 6.71 + (1000 - 700) * 6.16 + (700 - 500) * 5.44 + (500 - 330) * 4.39 + (330 - 120) * 3.02 + 120 * 2.1;
		}
		else {
			if (Deg > 0 && Deg <= 120) cp = Deg * 2.1;
			else if (Deg > 120 && Deg <= 330)
				cp = (Deg - 120) * 2.68 + 120 * 2.1;
			else if (Deg > 330 && Deg <= 500)
				cp = (Deg - 330) * 3.61 + (330 - 120) * 2.68 + 120 * 2.1;
			else if (Deg > 500 && Deg <= 700)
				cp = (Deg - 500) * 4.48 + (500 - 330) * 3.61 + (330 - 120) * 2.68 + 120 * 2.1;
			else if (Deg > 700 && Deg <= 1000)
				cp = (Deg - 700) * 5.03 + (700 - 500) * 4.48 + (500 - 330) * 3.61 + (330 - 120) * 2.68 + 120 * 2.1;
			else if (Deg > 1000)
				cp = (Deg - 1000) * 5.28 + (1000 - 700) * 5.03 + (700 - 500) * 4.48 + (500 - 330) * 3.61 + (330 - 120) * 2.68 + 120 * 2.1;
		}
		
	}
	else cout << "��J���~" << endl;

	cout << "�q�O = " << cp << " ��" << endl;
	
	system("pause > nul");
}