#include "stdafx.h"
#include <cstring>
using namespace std;

void _4_Strcmp() {

	const int len = 80;
	char passwd[len] = "2018", instring[len];
	cout << "U have 3 opportunities: " << endl;

	for (int i = 1; i <= 3; i++)
	{
		cout << "Plz enter the passwd: ";
		cin.getline(instring, len);
		int flag = strcmp(passwd, instring);
		if (flag == 0)
		{
			cout << "Congratulations! The passwd is correct. ";
			break;
		}
		else
		{
			if (i != 3)
				cout << " last " << 3 - i << " times " << endl;
			else
				cout << " Over ";
		}
	}

	cout << endl;

	system("pause");
}