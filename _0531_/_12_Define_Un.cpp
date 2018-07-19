#include "stdafx.h"
#define DIVIDE cout<<"*****"<<endl
#define STR cout<<"String"<<endl

using namespace std;

void _12_Define_Un() {

	DIVIDE;
	STR;
	#undef DIVIDE
	#define DIVIDE cout<<"====="<<endl
	DIVIDE;
	system("pause");
}