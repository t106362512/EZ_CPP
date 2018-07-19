#include <iostream>

using namespace std;

void _4_Kg_m_BMI() {

	float kg, m;

	cout << "請輸入身高(m):";
	cin >> m;
	cout << "請輸入體重(kg):";
	cin >> kg;
	cout << "BMI為 " << kg / (m*m) << endl;
	system("pause > nul");
}