#include "stdafx.h"
#define STR "Hello C++"
using namespace std;

void _8_Define_ifdef() {

	#ifdef STR
		cout << STR << endl;
	#else
		cout << "STR Not Define" << endl;
	#endif // STR
	system("pause");
}