#include "stdafx.h"
#include <iostream>
#include <string>				//础﹃夹肈郎
using namespace std;

class Employee					//Employee摸
{
	int EmpId;
	char name[20];
public:
	void inputEmp()				//﹚竡inputEmpㄧ计
	{
		cout << "Input EmpId:";
		cin >> EmpId;
		cout << "Input EmpName:";
		cin >> name;
	}

	void outputEmp()				//﹚竡outputEmpㄧ计
	{
		cout << "EmpId:" << EmpId << endl;
		cout << "EmpName:" << name << endl;
	}
	Employee()				//﹚竡礚把计ミ
	{
		EmpId = 0;
		strcpy_s(name, "ZZZ");
	}
	Employee(int id, const char *n)			//﹚竡Τ把计ミ
	{
		EmpId = id;
		strcpy_s(name, n);
	};
};

void _06_Class_3()
{
	Employee emp1;				//ミ礚把计ン

	Employee emp2(23,"TOM");	//ミΤ把计ン
	Employee emp3;				//ミ礚把计ン

	emp1.outputEmp();				//陪ボン箇砞
	emp2.outputEmp();				//陪ボン把计
	cout << endl;
	emp3.inputEmp();				//陪ボン块
	emp3.outputEmp();
	system("PAUSE");
}
