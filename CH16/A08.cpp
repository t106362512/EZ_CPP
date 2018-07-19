#include "stdafx.h"
#include <string>
using namespace std;

struct Data
{
	string name;
	int a, b;
};
void change(Data *ptr), prnStr(Data);

void A08() {

	Data num = { "Alice",71,80 };
	prnStr(num);
	cout << " ==========Change========== " << endl;
	change(&num);
	prnStr(num);
	system("pause");
}

void change(Data *ptr) { 
	int Temp = ptr->a;
	ptr->a = ptr->b;
	ptr->b = Temp;
	return;
}

void prnStr(Data obj) {
	cout << obj.name << " 's hava a = " << obj.a << " and b = " << obj.b << endl;
	return;
}