#include "stdafx.h"
#include <string>
using namespace std;

struct MyData
{
	string name;
	int math;
}student1{ "OAu",77 }; //string為指向Address位址,8 Bytes int 為 4 Bytes

void A03() {

	cout << "Student's name: ";
	cout << student1.name << " 's Math score is " << student1.math << endl;
	cout << "sizeof(student)" << sizeof(student1) << endl; //這裡為16 Bytes,因struct建構會抓建構裡占用記憶體最大的倍數
	system("pause");
}