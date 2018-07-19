#include <iostream>

using namespace std;

void _5_Lb_In_BMI() {

	float Lb, Ft;

	cout << "請輸入身高(Lb):";
	cin >> Lb;
	cout << "請輸入體重(Ft):";
	cin >> Ft;
	cout << "BMI為 " << Ft / (Lb*Lb) << endl;
	system("pause > nul");
}