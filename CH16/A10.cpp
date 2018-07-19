#include "stdafx.h"
#include <string>
using namespace std;

struct Data
{
	char grade;
	int score;
}student;

void A10() {

	char sex;
	do {
		cout << "Your sex is (1)Male (2)Female: ";
		cin >> sex;
		fflush(stdin);
	} while ((sex > '2') || (sex < '1'));
	if (sex == '1')
	{
		cout << "Input score:";
		cin >> student.score;
	}
	else
	{
		cout << "Input grade:";
		cin >> student.grade;
	}
	cout << "++++++OutPut++++++" << endl;
	if (sex == '1')
		cout << "student.score = " << student.score << endl;
	else
		cout << "student.grade = " << student.grade << endl;
	system("pause");
}

