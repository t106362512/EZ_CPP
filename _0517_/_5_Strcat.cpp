#include "stdafx.h"
#include <cstring>
using namespace std;

void _5_Strcat() {

	const int len = 80;
	char first[len], last[len], full[len * 2] = "";
	cout << "Plz enter your english name(first name): ";
	cin.getline(first, len);
	cout << "Plz enter your english name(last name): ";
	cin.getline(last, len);
	strcat_s(full, first);
	strcat_s(full, " ");
	strcat_s(full, last);
	cout << "Your full name is: " << full << endl;
	
	system("pause");
}