#include "stdafx.h"
#include <string>
using namespace std;

struct MyData
{
	string name;
	int math;
}student1{ "OAu",77 }; //string�����VAddress��},8 Bytes int �� 4 Bytes

void A03() {

	cout << "Student's name: ";
	cout << student1.name << " 's Math score is " << student1.math << endl;
	cout << "sizeof(student)" << sizeof(student1) << endl; //�o�̬�16 Bytes,�]struct�غc�|��غc�̥e�ΰO����̤j������
	system("pause");
}