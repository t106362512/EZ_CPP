#include "stdafx.h"
using namespace std;

void _1_Variable() {

	double A = 2.5;
	cout << "A ���Ȭ�: " << A << endl;
	cout << "A �ҥe�Ϊ��O����j�p��: "
		<< sizeof(A) << " bytes �άO "
		<< sizeof(double) << " bytes" << endl;
	cout << "A �Ҧb��}��: "
		<< "0x" << &A << endl; //&A ��A�ܼƪ���}
	system("pause > nul");
}