#include "stdafx.h"
#include <iostream>;
using namespace std;
void _2_Root2()
{
	float a, b, c, d;
	cout << "�п�Ja:" << endl;
	cin >> a;
	cout << "�п�Jb:" << endl;
	cin >> b;
	cout << "�п�Jc:" << endl;
	cin >> c;



	if (a == 0.0)
		if (b == 0.0)
			cout << "�L��! " << endl;
		else
			cout << "�u���@�ո�: " << -c / b << endl;
	else
	{
		d = b * b - 4.0*a*c;
		if (d == 0.0)
			cout << "����: " << -b / (2.0*a) << endl;
		else
			if (d > 0.0)
			{
				cout << "����չ�Ƹ�" << endl;
				cout << "�Ĥ@��:"
					<< (-b + sqrt(d)) / (2.0*a) << endl;
				cout << "�ĤG��:"
					<< (-b - sqrt(d)) / (2.0*a) << endl;
			}
			else
			{
				cout << "�Ѭ���զ@�m�Ƽ�" << endl;
				cout << "�Ĥ@��:"
					<< (-b) / (2.0*a)
					<< "+i" << sqrt(-d) / (2.0*a)
					<< endl;

				cout << "�ĤG��:"
					<< (-b) / (2.0*a)
					<< "-i" << sqrt(-d) / (2.0*a)
					<< endl;
			}
	}


	system("PAUSE");

}