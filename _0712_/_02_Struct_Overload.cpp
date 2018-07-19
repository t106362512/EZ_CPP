#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.141593f

struct Cuboid1				//�ŧiCuboid��Ƶ��c
{
	int length;				//Cuboid����Ʀ���1
	int width;				//Cuboid����Ʀ���2
	int height;				//Cuboid����Ʀ���3
};

struct Cylinder				//�ŧiCylinder��Ƶ��c
{
	float radius;			//Cylinder����Ʀ���1
	float height;			//Cylinder����Ʀ���2
};

int area(Cuboid1 r)				//�p���������n���
{
	return 2 * (r.length * r.width
		+ r.width * r.height
		+ r.height * r.length);
}

int volumn(Cuboid1 r)				//�p���������n���
{
	return r.length * r.width * r.height;
}

float area(Cylinder c)				//�p���W����n���
{
	return 2 * PI * c.radius * c.height;
}

float volumn(Cylinder c)				//�p���W����n���
{
	return PI * float(pow(c.radius, 2)) * c.height;
}


void _02_Struct_Overload()
{
	Cuboid1 rt = { 6, 8, 10 };			          //�إ�Cuboid���c���
	cout << "������G\n";
	cout << "�� = " << rt.length << endl;		//��X�����骺��
	cout << "�e = " << rt.width << endl;			//��X�����骺�e
	cout << "�� = " << rt.height << endl;		//��X�����骺��
	cout << "���n = " << area(rt) << "���褽��\n";	//��X��������n
	cout << "��n = " << volumn(rt) << "�ߤ褽��\n\n";	//��X��������n

	Cylinder cl = { 5.0, 10.0 };			        //�إ�Cylinder���c���
	cout << "��W��G\n";
	cout << "�b�| = " << cl.radius << endl;		//��X��W��b�|
	cout << "�� = " << cl.height << endl;		//��X�����骺��
	cout << "���n = " << area(cl) << "���褽��\n";	//��X��W����n
	cout << "��n = " << volumn(cl) << "�ߤ褽��\n";	//��X��W����n
	system("PAUSE");
}
