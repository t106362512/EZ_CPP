#include "stdafx.h"
#include <string>
using namespace std;

struct MyData
{
	string name;
	int math, eng;
};
float average(int, int);

void A07() {

	MyData num = { "Alice",71,80 };
	cout << num.name << " 's Math score = " << num.math << endl;
	cout << " English score = " << num.eng << endl;
	cout << "average = " << average(num.math, num.eng) << endl;
	system("pause");
}

inline float average(int a, int b)
{
	return (float)(a + b) / 2;
}
