#include "stdafx.h"
using namespace std;

void _06_() {
	int A, B, C, D, F;
	A = B = C = D = F = 0;
	int score[30] = {83,96,74,65,94,88,93,78,92,82,72,66,69,75,80,98,86,60,70,89,90,95,84,85,76,79,63,99,64,91};
	for (int i = 0; i < 30; i++)
	{
		if (score[i] >= 90) A++;
		else if (score[i] >= 80 && score[i] < 90) B++;
		else if (score[i] >= 70 && score[i] < 80) C++;
		else if (score[i] >= 60 && score[i] < 70) D++;
		else F++;
	}

	cout << "成績 A 有 " << A << " 人" << endl;
	cout << "成績 B 有 " << B << " 人" << endl;
	cout << "成績 C 有 " << C << " 人" << endl;
	cout << "成績 D 有 " << D << " 人" << endl;
	cout << "成績 F 有 " << F << " 人" << endl;

	system("pause");
}