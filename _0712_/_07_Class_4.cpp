#include "stdafx.h"
#include <iostream>
#include <string>				//���J�r����D��
using namespace std;


class Employee					//�ŧiEmployee���O
{
	int EmpId;
	char name[20];
public:
	Employee()				//�w�q�إߪ̨��
	{
		EmpId = 0;			//���wEmpId���
		strcpy_s(name, "ZZZ");			//���wname���
	}
	void setEmp(int id, const char *n)			//�w�qsetEmp���
	{
		EmpId = id;
		strcpy_s(name, n);
	}

	void outputEmp()				//�w�qoutputEmp���
	{
		cout << this->EmpId << '\t';	//���0
		cout << (*this).name << endl;	//���ZZZ
	}
};

void _07_Class_4()
{
	Employee emp1;				//�إߵL�Ѽƪ���
	cout << "ID\tEmpName\n";
	cout << "---\t-------\n";
	emp1.outputEmp();				//�I�soutputEmp���
	emp1.setEmp(101,"Tom");			//�I�ssetEmp�������
	emp1.outputEmp();				//�I�soutputEmp���
	system("PAUSE");
}
