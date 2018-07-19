#include "stdafx.h"
#include <iostream>;
using namespace std;
void _2_Root2()
{
	float a, b, c, d;
	cout << "請輸入a:" << endl;
	cin >> a;
	cout << "請輸入b:" << endl;
	cin >> b;
	cout << "請輸入c:" << endl;
	cin >> c;



	if (a == 0.0)
		if (b == 0.0)
			cout << "無解! " << endl;
		else
			cout << "只有一組解: " << -c / b << endl;
	else
	{
		d = b * b - 4.0*a*c;
		if (d == 0.0)
			cout << "重根: " << -b / (2.0*a) << endl;
		else
			if (d > 0.0)
			{
				cout << "有兩組實數解" << endl;
				cout << "第一組:"
					<< (-b + sqrt(d)) / (2.0*a) << endl;
				cout << "第二組:"
					<< (-b - sqrt(d)) / (2.0*a) << endl;
			}
			else
			{
				cout << "解為兩組共軛複數" << endl;
				cout << "第一組:"
					<< (-b) / (2.0*a)
					<< "+i" << sqrt(-d) / (2.0*a)
					<< endl;

				cout << "第二組:"
					<< (-b) / (2.0*a)
					<< "-i" << sqrt(-d) / (2.0*a)
					<< endl;
			}
	}


	system("PAUSE");

}