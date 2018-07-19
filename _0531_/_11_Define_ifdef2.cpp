#include "stdafx.h"
#define SIZE 10
using namespace std;

void _11_Define_ifdef2() {
	
	#ifdef SIZE
		#if SIZE > 10
			char str[SIZE] = "This is a Big SIZE.";
		#else
			char str[] = "This is a Small SIZE.";
		#endif // SIZE > 10
	#else
		char str[] = "Not Found SIZE.";
	#endif // SIZE
	cout << str << endl;
	system("pause");
}