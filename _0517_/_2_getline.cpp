#include "stdafx.h"
using namespace std;

void _2_getline() {

	const int len = 15;
	int i;
	char name[len];
	for ( i = 0; i < 2; i++)
	{
		cout << "What's your name? ";
		cin.getline(name, len);
		cout << "Hi, " << name << ", how are you?" << endl << endl;
	}

	system("pause");
}