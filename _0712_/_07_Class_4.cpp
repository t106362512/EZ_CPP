#include "stdafx.h"
#include <iostream>
#include <string>				//础﹃夹肈郎
using namespace std;


class Employee					//Employee摸
{
	int EmpId;
	char name[20];
public:
	Employee()				//﹚竡ミㄧ计
	{
		EmpId = 0;			//﹚EmpId
		strcpy_s(name, "ZZZ");			//﹚name
	}
	void setEmp(int id, const char *n)			//﹚竡setEmpㄧ计
	{
		EmpId = id;
		strcpy_s(name, n);
	}

	void outputEmp()				//﹚竡outputEmpㄧ计
	{
		cout << this->EmpId << '\t';	//陪ボ0
		cout << (*this).name << endl;	//陪ボZZZ
	}
};

void _07_Class_4()
{
	Employee emp1;				//ミ礚把计ン
	cout << "ID\tEmpName\n";
	cout << "---\t-------\n";
	emp1.outputEmp();				//㊣outputEmpㄧ计
	emp1.setEmp(101,"Tom");			//㊣setEmpΘㄧ计
	emp1.outputEmp();				//㊣outputEmpㄧ计
	system("PAUSE");
}
