#include "stdafx.h"
using namespace std;

void CheckSeason(int Month) {
	if (Month < 1 || Month>12)
		cout << "�z��J������S���N�q�I" << endl;
	else
	{
		cout << Month << " ��O";
		switch ((Month % 12) / 3)
		{
		case 0:
			cout << "\"�V�u\"" << endl;
			break;
		case 1:
			cout << "\"�K�u\"" << endl;
			break;

		case 2:
			cout << "\"�L�u\"" << endl;
			break;

		case 3:
			cout << "\"��u\"" << endl;
			break;
		default:
			cout << "???" << endl;
			break;
		}
	}
}

void _3_SeasonsFnc() {

	int Month;
	cout << "\n�п�J���" << endl;
	cin >> Month;
	CheckSeason(Month);
	
	system("pause");
}

