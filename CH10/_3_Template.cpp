#include "stdafx.h"
using namespace std;

template<class T>
T Abs(T x) { return (x > 0) ? x : -x; }
//template<class T> ,T¬° int,float,double

void _3_Template() {

	cout << "Abs(x):\t"<<Abs(-9.8)<<endl;
	system("pause");
}