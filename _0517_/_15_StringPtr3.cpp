#include "stdafx.h"
#include <string>
using namespace std;
void Encode(char *);

void _15_StringPtr3() {

	const int len = 30;
	char inputString[len];
	cout << "Plz input your original code:" << endl;
	cin.getline(inputString, len);
	Encode(inputString);
	cout << "The answer is : " << endl;
	cout << inputString << endl;

	system("pause");
}

void Encode(char *String) {

	const int len = 28;
	char codes[len] = "utjifnepdliwngjk,d.0vmajxur";
	char AB[len] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ab[len] = "abcdefghijkmnopqrstuvwxyz";
	int i, j, size = strlen(String);
	for ( i = 0; i < size; i++)
	{
		j = 0;
		while (String[i] != AB[j] && String[i] != ab[j] && j < 26)
			j++;
		String[i] = codes[j];
	}
	return;
}