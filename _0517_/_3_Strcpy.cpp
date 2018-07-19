#include "stdafx.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void _3_Strcpy() {

	const int len = 80;
	char source[len], target[len] = "";
	cout << "Source: ";
	cin.getline(source, len);
	strcpy_s(target, source);
	//char_traits<char>::copy(source, target, char_traits<char>::length(source));
	cout << "target: " << target << endl;

	system("pause");
}