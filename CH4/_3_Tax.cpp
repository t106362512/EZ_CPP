//Tax.Cpp
#include "stdafx.h"
using namespace std;
//---�Ф@�D�{����--------�Ф@
void _3_Tax()
{
	float GIncome, Tax;
	cout << "\n�п�J��X�ұo�b�B: " << endl;
	cin >> GIncome;
	if (GIncome < 0.0)
		cout << "�z��J����X�ұo�b�B�S���N�q!" << endl;
	else if (GIncome < 330000.0)
		Tax = GIncome * 0.06;
	else if (GIncome < 890000.0)
		Tax = GIncome * 0.13 - 23100;

	else if (GIncome < 1780000.0)
		Tax = GIncome * 0.21 - 94300;

	else if (GIncome < 3340000.0)
		Tax = GIncome * 0.3 - 254500;
	else
		Tax = GIncome * 0.4 - 588500;

	cout << "�z�nú����X�ұo�|�O: "
		<< Tax << "��";
	system("PAUSE > nul");
}