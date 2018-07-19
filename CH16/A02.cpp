#include "stdafx.h"
#include <string>
using namespace std;

struct MyData
{
	string name;
	int math;
}student;

void A02() {

	cout << "Student's name: ";
	getline(cin, student.name);
	cin >> student.math;
	cout << "========OutPut========" << endl;
	cout << student.name << " 's Math score is " << student.math;
	system("pause");
}